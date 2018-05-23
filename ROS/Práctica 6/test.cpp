<pre><div class="text_to_html">/* +---------------------------------------------------------------------------+
   |          The Mobile Robot Programming Toolkit (MRPT) C++ library          |
   |                                                                           |
   |                       http://www.mrpt.org/                                |
   |                                                                           |
   |   Copyright (C) 2005-2012  University of Malaga                           |
   |                                                                           |
   |    This software was written by the Machine Perception and Intelligent    |
   |      Robotics Lab, University of Malaga (Spain).                          |
   |    Contact: Jose-Luis Blanco  <jlblanco@ctima.uma.es>                     |
   |                                                                           |
   |  This file is part of the MRPT project.                                   |
   |                                                                           |
   |     MRPT is free software: you can redistribute it and/or modify          |
   |     it under the terms of the GNU General Public License as published by  |
   |     the Free Software Foundation, either version 3 of the License, or     |
   |     (at your option) any later version.                                   |
   |                                                                           |
   |   MRPT is distributed in the hope that it will be useful,                 |
   |     but WITHOUT ANY WARRANTY; without even the implied warranty of        |
   |     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         |
   |     GNU General Public License for more details.                          |
   |                                                                           |
   |     You should have received a copy of the GNU General Public License     |
   |     along with MRPT.  If not, see <http://www.gnu.org/licenses/>.         |
   |                                                                           |
   +---------------------------------------------------------------------------+ */
// ------------------------------------------------------
//  Refer to the description in the wiki:
//  http://www.mrpt.org/Kalman_Filters
// ------------------------------------------------------


// -----------------------------------------------
// PRÁCTICA 7: EKF PARA LOCALIZACIÓN RANGE-BEARING
// -----------------------------------------------

#include <mrpt/base.h> 
#include <mrpt/gui.h> 
#include <mrpt/obs.h> 

#include <mrpt/bayes/CKalmanFilterCapable.h> 

using namespace mrpt;
using namespace mrpt::bayes;
using namespace mrpt::gui;
using namespace mrpt::math;
using namespace mrpt::slam;
using namespace mrpt::utils;
using namespace mrpt::random;
using namespace std;

//---------------------------
// A) Definición de variables
//---------------------------

#define BEARING_SENSOR_NOISE_STD 	DEG2RAD(15.0f)
#define RANGE_SENSOR_NOISE_STD 		0.3f
#define DELTA_TIME                  	0.1f

#define VEHICLE_INITIAL_X			4.0f
#define VEHICLE_INITIAL_Y			4.0f
#define VEHICLE_INITIAL_V           1.0f
#define VEHICLE_INITIAL_W           DEG2RAD(20.0f)

#define TRANSITION_MODEL_STD_XY 	0.03f
#define TRANSITION_MODEL_STD_VXY 	0.20f

// Uncomment to save text files with grount truth vs. estimated states
#define SAVE_GT_LOGS



// ------------------------------------------------------
// B) Definición de la clase CRangeBearing
//    a partir de la clase CKalmanFilterCapable
//    ya existente en la MRPT
// ------------------------------------------------------
class CRangeBearing :
	public mrpt::bayes::CKalmanFilterCapable<4 /* x y vx vy*/, 2 /* range yaw */, 0 , 1 /* Atime */>							  
{
public:
	CRangeBearing( );
	virtual ~CRangeBearing();

	void  doProcess( double DeltaTime, double observationRange, double observationBearing );

	void getState( KFVector &xkk, KFMatrix &pkk)
	{
		xkk = m_xkk;
		pkk = m_pkk;
	}

 protected:

	float m_obsBearing,m_obsRange;
	float m_deltaTime;

	// Funciones necesarias para implantar el filtro de Kalman,
	// heredadas de la clase CKalmanFilterCapable

	/** OnGetAction: Devuelve el vector de acción u
	  * \param out_u: El vector de acción que se le pasará a OnTransitionModel
	  */
	void OnGetAction( KFArray_ACT &out_u ) const;

	/** OnTransitionModel: implementa el modelo de transición
	  * \param in_u: El vector devuelto por OnGetAction.
	  * \param inout_x: A la entrada contiene hat{x}_{k-1|k-1}, a la salida contiene hat{x}_{k|k-1}.
	  * \param out_skip: Si es true, se salta el paso de predicción; por defecto es false.
	  */
	void OnTransitionModel(
		const KFArray_ACT &in_u,
		KFArray_VEH       &inout_x,
		bool &out_skipPrediction
		 ) const;

	/** OnTransitionJacobian: Implementa el Jacobiano del modelo de transición frac{\partial f}{\partial x}.
	  * \param out_F: Devuelve el Jacobiano.
	  *  La matriz devuelta debe ser NxN con N siendo o el tamaño de todo el vector de estado o get_vehicle_size().
	  */
	void OnTransitionJacobian(KFMatrix_VxV  &out_F ) const;

	/** OnTransitionNoise: Implementa la covarianza del ruido del modelo de transición.
	  * \param out_Q: Matriz de covarianza.
	  *  La matriz devuelta debe ser de la misma dimensión que el Jacobiano de OnTransitionJacobian
	  */
	void OnTransitionNoise(KFMatrix_VxV &out_Q ) const;

	/** OnGetObservationNoise: Devuelve la matriz de covarianza del ruido de la observación,
	    es decir, el modelo del ruido gaussiano del sensor.
	  * \param out_R: La matriz de covarianza del ruido. Puede ser no diagonal, aunque normalmente lo es.
	  */
	void OnGetObservationNoise(KFMatrix_OxO &out_R) const;

	/** OnGetObservationsAndDataAssociation: Se llama entre la fase de predicción y la de actualización.
	    Debe devolvr las observaciones y, cuando sea el caso (por ejemplo, al mapear), la asociación
		de datos entre las observaciones y el mapa actual.
	  *
	  * \param out_z: N vectores, uno por cada observación de tamaño OBS_SIZE, N siendo el número de observaciones: cuántas landmarks observadas en un mapa, o sólo una si no es aplicable.
	  * \param out_data_association: Un vector vacío o, cuando es aplicable, un vector donde el i-ésimo elemento corresponde a la posición de la observación en la i-ésima fila de out_z en el vector de estados, o -1 si es un nuevo elemento que queremos insertar en el mapa al final de esta iteración.
	  * \param in_all_predictions: Un vector con la predicción de todas las landmarks del mapa.
	  * \param in_S: La matriz de covarianza completa de las predicciones de las observaciones.
	  * \param in_lm_indices_in_S: Índices de las landmarks del mapa que pueden encontrarse en in_S.
	  *
	  * Este método se llama sólo una vez en cada iteración del filtro.
	  * Se supone que las observaciones son independientes y no hay covarianzas cruzadas entre ellas.
	  */
	void OnGetObservationsAndDataAssociation(
		vector_KFArray_OBS			&out_z,
		mrpt::vector_int            &out_data_association,
		const vector_KFArray_OBS	&in_all_predictions,
		const KFMatrix              &in_S,
		const vector_size_t         &in_lm_indices_in_S,
		const KFMatrix_OxO          &in_R
		);

		/** OnObservationModel: Implementa la predicción de la observación h_i(x).
		  * \param idx_landmark_to_predict: Índices de las landmarks del mapa cuyas predicciones se esperan como salida. Para problemas no-SLAM, este parámetro está indefinido y sólo se generará una observación.
		  * \param out_predictions: Las observaciones.
		  */
		void OnObservationModel(
			const vector_size_t &idx_landmarks_to_predict,
			vector_KFArray_OBS  &out_predictions
			) const;

		/** OnObservationJacobians: Implementa los Jacobianos de la observación frac{\partial h_i}{\partial x} y (cuando es aplicable) frac{\partial h_i}{\partial y_i}.
		  * \param idx_landmark_to_predict: Índice del landmark del mapa cuya predicción se espera como salida. Para problemas no-SLAM, será cero.
		  * \param Hx: Jacobiano de salida frac{\partial h_i}{\partial x}.
		  * \param Hy: Jacobiano de salida frac{\partial h_i}{\partial y_i}.
		  */
		void OnObservationJacobians(
			const size_t &idx_landmark_to_predict,
			KFMatrix_OxV &Hx,
			KFMatrix_OxF &Hy
			) const;

		/** OnSubstractObservationVectors: Calcula A=A-B, que puede ser necesario en ciertas circunstancias.
		  */
		void OnSubstractObservationVectors(KFArray_OBS &A, const KFArray_OBS &B) const;

	/** @}
	 */
};



// ------------------------------------------------------
// C) Implementación de la función TestBayesianTracking()
// ------------------------------------------------------
void TestBayesianTracking()
{
	randomGenerator.randomize();

	// Creación de la ventana gráfica
	CDisplayWindowPlots winEKF("Tracking - Extended Kalman Filter",450,400);
	winEKF.setPos(10,10);
	winEKF.axis(-2,20,-10,10); winEKF.axis_equal();


	// Creación del EKF a partir de la clase CRangeBearing
	CRangeBearing 	EKF;
	EKF.KF_options.method = kfEKFNaive;
	EKF.KF_options.verbose = true;
	EKF.KF_options.enable_profiler = true;


#ifdef SAVE_GT_LOGS
	CFileOutputStream  fo_log_ekf("log_GT_vs_EKF.txt");
	fo_log_ekf.printf("%%%% GT_X  GT_Y  EKF_MEAN_X  EKF_MEAN_Y   EKF_STD_X   EKF_STD_Y\n");
#endif

	// Simulación
	float x=VEHICLE_INITIAL_X,y=VEHICLE_INITIAL_Y,phi=DEG2RAD(-180),v=VEHICLE_INITIAL_V,w=VEHICLE_INITIAL_W;
	float  t=0;

	while (winEKF.isOpen() && !mrpt::system::os::kbhit() )
	{
		// COMPLETAR: Actualización de la posición del vehículo usando el modelo cinemático dado en el enunciado
		
		// Simulación de las observaciones con ruido
		float realBearing = atan2( y,x );
		float obsBearing = realBearing  + BEARING_SENSOR_NOISE_STD * randomGenerator.drawGaussian1D_normalized();
		printf("Real/Simulated bearing: %.03f / %.03f deg\n", RAD2DEG(realBearing), RAD2DEG(obsBearing) );

		float realRange = sqrt(square(x)+square(y));
		float obsRange = max(0.0, realRange  + RANGE_SENSOR_NOISE_STD * randomGenerator.drawGaussian1D_normalized() );
		printf("Real/Simulated range: %.03f / %.03f \n", realRange, obsRange );

		// Procesamiento con el EKF
		EKF.doProcess(DELTA_TIME,obsRange, obsBearing);

		EKF.getProfiler().enter("PF:complete_step");
		EKF.getProfiler().leave("PF:complete_step");

		// Mostrar el estado del EKF por pantalla
		CRangeBearing::KFVector EKF_xkk;
		CRangeBearing::KFMatrix EKF_pkk;

		EKF.getState( EKF_xkk, EKF_pkk );
		printf("Real: x:%.03f  y=%.03f heading=%.03f v=%.03f w=%.03f\n",x,y,phi,v,w);
		cout << "EKF: " << EKF_xkk << endl;

		// Dibujar el estado del EKF en la ventana gráfica
		CRangeBearing::KFMatrix   COVXY(2,2);
		COVXY(0,0) = EKF_pkk(0,0);
		COVXY(1,1) = EKF_pkk(1,1);
		COVXY(0,1) = COVXY(1,0) = EKF_pkk(0,1);

		winEKF.plotEllipse( EKF_xkk[0], EKF_xkk[1], COVXY, 3, "b-2", "ellipse_EKF" );

		// Almacenar en fichero Ground Truth y EKF
#ifdef SAVE_GT_LOGS
		// %% GT_X  GT_Y  EKF_MEAN_X  EKF_MEAN_Y   EKF_STD_X   EKF_STD_Y:
		fo_log_ekf.printf("%f %f %f %f %f %f\n",
			x,y, // Real (GT)
			EKF_xkk[0], EKF_xkk[1],
			std::sqrt(EKF_pkk(0,0)), std::sqrt(EKF_pkk(1,1))
			);
#endif

		// Dibujar el vector velocidad:
		vector_float vx(2),vy(2);
		vx[0] = EKF_xkk[0];  vx[1] = vx[0] + EKF_xkk[2] * 1;
		vy[0] = EKF_xkk[1];  vy[1] = vy[0] + EKF_xkk[3] * 1;
		winEKF.plot( vx,vy, "g-4", "velocityEKF" );


		// Dibujar la Ground Truth:
		winEKF.plot( vector_float(1,x), vector_float(1,y),"k.8","plot_GT");

		// Dibujar las observaciones con ruido:
		vector_float  obs_x(2),obs_y(2);
		obs_x[0] = obs_y[0] = 0;
		obs_x[1] = obsRange * cos( obsBearing );
		obs_y[1] = obsRange * sin( obsBearing );

		winEKF.plot(obs_x,obs_y,"r", "plot_obs_ray");


		// Delay:
		mrpt::system::sleep((int)(DELTA_TIME*1000));
		t+=DELTA_TIME;
	}
}


// ------------------------------------------------------
// D) Implementación de la función main()
// ------------------------------------------------------
int main()
{
	try
	{
		TestBayesianTracking();
		return 0;
	} catch (std::exception &e)
	{
		std::cout << "MRPT exception caught: " << e.what() << std::endl;
		return -1;
	}
	catch (...)
	{
		printf("Untyped exception!!");
		return -1;
	}
}



//-------------------------------
// E) Implantación de los métodos
// de la clase CRangeBearing
//-------------------------------


CRangeBearing::CRangeBearing()
{
	KF_options.method = kfEKFNaive;

	// Inicialización del estado
	m_xkk.resize(4,0);
	m_xkk[0]= VEHICLE_INITIAL_X;
	m_xkk[1]= VEHICLE_INITIAL_Y;
	m_xkk[2]=-VEHICLE_INITIAL_V;
	m_xkk[3]=0;

	// Initial cov:  Large uncertainty
	m_pkk.setSize(4,4);
	m_pkk.unit();
	m_pkk(0,0)=
	m_pkk(1,1)= square( 5.0f );
	m_pkk(2,2)=
	m_pkk(3,3)= square( 1.0f );
}

CRangeBearing::~CRangeBearing()
{

}


void  CRangeBearing::doProcess( double DeltaTime, double observationRange, double observationBearing )
{
	m_deltaTime = (float)DeltaTime;
	m_obsBearing = (float)observationBearing;
	m_obsRange = (float) observationRange;

	runOneKalmanIteration();
}


// La acción de control es el tiempo
void CRangeBearing::OnGetAction( KFArray_ACT &u ) const
{
	u[0] = m_deltaTime;
}


void CRangeBearing::OnTransitionModel(
	const KFArray_ACT &in_u,
	KFArray_VEH       &inout_x,
	bool &out_skipPrediction
	) const
{
	// in_u[0] : Delta time
	// in_out_x: [0]:x  [1]:y  [2]:vx  [3]: vy
	// COMPLETAR

}

void CRangeBearing::OnTransitionJacobian(KFMatrix_VxV  &F) const
{
	F.unit(); // crea una matriz identidad

	// COMPLETAR
}


void CRangeBearing::OnTransitionNoise(KFMatrix_VxV &Q) const
{
	Q(0,0) =
	Q(1,1) = square( TRANSITION_MODEL_STD_XY );
	Q(2,2) =
	Q(3,3) = square( TRANSITION_MODEL_STD_VXY );
}


void CRangeBearing::OnGetObservationNoise(KFMatrix_OxO &R) const
{
	R(0,0) = square( BEARING_SENSOR_NOISE_STD );
	R(1,1) = square( RANGE_SENSOR_NOISE_STD );
}

void CRangeBearing::OnGetObservationsAndDataAssociation(
	vector_KFArray_OBS			&out_z,
	mrpt::vector_int            &out_data_association,
	const vector_KFArray_OBS	&in_all_predictions,
	const KFMatrix              &in_S,
	const vector_size_t         &in_lm_indices_in_S,
	const KFMatrix_OxO          &in_R
	)
{
	out_z.resize(1);
	out_z[0][0] = m_obsBearing;
	out_z[0][1] = m_obsRange;

	out_data_association.clear(); // Not used
}



void CRangeBearing::OnObservationModel(
	const vector_size_t       &idx_landmarks_to_predict,
	vector_KFArray_OBS	&out_predictions
	) const
{
	// predicted bearing:
	kftype x = m_xkk[0];
	kftype y = m_xkk[1];

	kftype h_bear = atan2(y,x);
	kftype h_range = sqrt(square(x)+square(y));

	// idx_landmarks_to_predict is ignored in NON-SLAM problems
	out_predictions.resize(1);
	out_predictions[0][0] = h_bear;
	out_predictions[0][1] = h_range;
}


void CRangeBearing::OnObservationJacobians(
	const size_t &idx_landmark_to_predict,
	KFMatrix_OxV &Hx,
	KFMatrix_OxF &Hy
	) const
{
	// COMPLETAR

	// Hy: Not used
}


void CRangeBearing::OnSubstractObservationVectors(KFArray_OBS &A, const KFArray_OBS &B) const
{
	A -= B;
	math::wrapToPiInPlace(A[0]); // The angular component
}


</div></pre>