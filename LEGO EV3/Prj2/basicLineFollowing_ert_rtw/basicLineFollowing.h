/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: basicLineFollowing.h
 *
 * Code generated for Simulink model 'basicLineFollowing'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 14:24:35 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_basicLineFollowing_h_
#define RTW_HEADER_basicLineFollowing_h_
#include <math.h>
#include <stddef.h>
#ifndef basicLineFollowing_COMMON_INCLUDES_
# define basicLineFollowing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* basicLineFollowing_COMMON_INCLUDES_ */

#include "basicLineFollowing_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  uint8_T LCD_p1[6];

  /* Expression: lcdStr1
   * Referenced by: '<S2>/LCD'
   */
  uint8_T LCD_p1_e[7];
} ConstP_basicLineFollowing_T;

/* Parameters (auto storage) */
struct P_basicLineFollowing_T_ {
  real_T LightintensityThreshold_Value;/* Expression: 10
                                        * Referenced by: '<Root>/Light intensity  Threshold '
                                        */
  real_T ControllerGain_Gain;          /* Expression: 2.5
                                        * Referenced by: '<Root>/Controller Gain '
                                        */
  real_T Nominalspeed_Value;           /* Expression: 30
                                        * Referenced by: '<Root>/Nominal speed '
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -0.5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 0.5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -0.5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_basicLineFollowing_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_basicLineFollowing_T basicLineFollowing_P;

/* Constant parameters (auto storage) */
extern const ConstP_basicLineFollowing_T basicLineFollowing_ConstP;

/* Model entry point functions */
extern void basicLineFollowing_initialize(void);
extern void basicLineFollowing_step(void);
extern void basicLineFollowing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_basicLineFollowing_T *const basicLineFollowing_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'basicLineFollowing'
 * '<S1>'   : 'basicLineFollowing/Display'
 * '<S2>'   : 'basicLineFollowing/Display1'
 * '<S3>'   : 'basicLineFollowing/Motor'
 * '<S4>'   : 'basicLineFollowing/Motor1'
 */
#endif                                 /* RTW_HEADER_basicLineFollowing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
