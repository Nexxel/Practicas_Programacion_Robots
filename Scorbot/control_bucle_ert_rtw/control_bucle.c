/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_bucle.c
 *
 * Code generated for Simulink model 'control_bucle'.
 *
 * Model version                  : 1.73
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 25 14:08:22 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_bucle.h"
#include "control_bucle_private.h"

/* Block states (auto storage) */
DW_control_bucle_T control_bucle_DW;

/* Real-time model */
RT_MODEL_control_bucle_T control_bucle_M_;
RT_MODEL_control_bucle_T *const control_bucle_M = &control_bucle_M_;

/* Model step function */
void control_bucle_step(void)
{
  uint8_T rtb_ColorSensor_0;
  int8_T tmp;
  real_T lectura_recta;
  real_T derivada;
  real_T tmp_0;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  rtb_ColorSensor_0 = getColorSensorValue(1U, 2U);

  /* S-Function (ev3_lcd): '<S1>/LCD' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  lcdDisplay(rtb_ColorSensor_0, control_bucle_ConstP.LCD_p1, 2U, 1U);

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Kd'
   *  Constant: '<Root>/Ki'
   *  Constant: '<Root>/Kp '
   *  Constant: '<Root>/Potencia base'
   *  Constant: '<Root>/WINDUP'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  /* MATLAB Function 'MATLAB Function1': '<S5>:1' */
  /* '<S5>:1:2' negro = double(5); */
  /* '<S5>:1:3' blanco = double(72); */
  /* '<S5>:1:4' NEGRO = double(35); */
  /* '<S5>:1:5' BLANCO = double(70); */
  /* '<S5>:1:7' lectura = double(lectura); */
  /* '<S5>:1:8' lectura_recta = double((lectura*(BLANCO-NEGRO)/(blanco-negro))+((negro*(BLANCO-NEGRO))+(NEGRO*(blanco-negro)))/(blanco-negro)); */
  lectura_recta = (real_T)rtb_ColorSensor_0 * 35.0 / 67.0 + 37.611940298507463;

  /* '<S5>:1:9' error = lectura_recta-(BLANCO+NEGRO)/2.0; */
  /* '<S5>:1:14' if isempty(s) */
  /* '<S5>:1:19' D = 0.1; */
  /* '<S5>:1:21' integral = integral + double(error)*D; */
  control_bucle_DW.integral += (lectura_recta - 52.5) * 0.1;

  /* '<S5>:1:22' derivada = (error-previous_error) * D; */
  derivada = ((lectura_recta - 52.5) - control_bucle_DW.previous_error) * 0.1;

  /* '<S5>:1:23' previous_error = double(error); */
  control_bucle_DW.previous_error = lectura_recta - 52.5;

  /* '<S5>:1:24' if abs(integral) > WINDUP */
  if (fabs(control_bucle_DW.integral) > control_bucle_P.WINDUP_Value) {
    /* '<S5>:1:25' integral = 0; */
    control_bucle_DW.integral = 0.0;
  }

  /* '<S5>:1:27' Gc = double(Kp*double(error) + Kd*derivada + Ki*integral); */
  /* '<S5>:1:28' Gc = double(Gc/100); */
  derivada = (((lectura_recta - 52.5) * control_bucle_P.Kp_Value +
               control_bucle_P.Kd_Value * derivada) + control_bucle_P.Ki_Value *
              control_bucle_DW.integral) / 100.0;

  /* '<S5>:1:29' motor_izquierdo = potencia_base + Gc; */
  /* '<S5>:1:30' motor_derecho = potencia_base - Gc; */
  lectura_recta = control_bucle_P.Potenciabase_Value + derivada;

  /* Saturate: '<Root>/Saturation' */
  if (lectura_recta > control_bucle_P.Saturation_UpperSat) {
    lectura_recta = control_bucle_P.Saturation_UpperSat;
  } else {
    if (lectura_recta < control_bucle_P.Saturation_LowerSat) {
      lectura_recta = control_bucle_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  tmp_0 = floor(lectura_recta);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  /* S-Function (ev3_lcd): '<S2>/LCD' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  lcdDisplay(tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)tmp_0,
             control_bucle_ConstP.LCD_p1_h, 3U, 1U);

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Potencia base'
   */
  derivada = control_bucle_P.Potenciabase_Value - derivada;

  /* Saturate: '<Root>/Saturation1' */
  if (derivada > control_bucle_P.Saturation1_UpperSat) {
    derivada = control_bucle_P.Saturation1_UpperSat;
  } else {
    if (derivada < control_bucle_P.Saturation1_LowerSat) {
      derivada = control_bucle_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  tmp_0 = floor(derivada);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  /* S-Function (ev3_lcd): '<S3>/LCD' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  lcdDisplay(tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)tmp_0,
             control_bucle_ConstP.LCD_p1_hm, 4U, 1U);

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  tmp_0 = floor(lectura_recta);
  if (tmp_0 < 128.0) {
    if (tmp_0 >= -128.0) {
      /* S-Function (ev3_motor): '<S6>/Motor' */
      tmp = (int8_T)tmp_0;
    } else {
      /* S-Function (ev3_motor): '<S6>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S6>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S6>/Motor' */
  setMotor(&tmp, 2U, 2U);

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  tmp_0 = floor(derivada);
  if (tmp_0 < 128.0) {
    if (tmp_0 >= -128.0) {
      /* S-Function (ev3_motor): '<S7>/Motor' */
      tmp = (int8_T)tmp_0;
    } else {
      /* S-Function (ev3_motor): '<S7>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S7>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S7>/Motor' */
  setMotor(&tmp, 3U, 2U);

  /* MATLAB Function 'MATLAB Function': '<S4>:1' */
  /* '<S4>:1:2' if  abs(Gc + potencia_base) < SATURACION */
  /*   */
  /*      if potencia_base+Gc+SATURACION < 0 */
  /*          motor_izquierdo = -SATURACION; */
  /*      else */
  /*          motor_izquierdo = double(min(potencia_base+Gc, SATURACION)); */
  /*      end */
  /*      if Gc < potencia_base */
  /*          motor_derecho = double(max(potencia_base-Gc, -SATURACION)); */
  /*      else */
  /*          motor_derecho = double(min(potencia_base-Gc, SATURACION)); */
  /*      end */
}

/* Model initialize function */
void control_bucle_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(control_bucle_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&control_bucle_DW, 0,
                sizeof(DW_control_bucle_T));

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(1U, 2U);

  /* Start for S-Function (ev3_lcd): '<S1>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_lcd): '<S2>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_lcd): '<S3>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_motor): '<S6>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S7>/Motor' */
  initMotor(3U);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function1' */
  /* '<S5>:1:15' integral = 0; */
  control_bucle_DW.integral = 0.0;

  /* '<S5>:1:16' s = 1; */
  /* '<S5>:1:17' previous_error = 0; */
  control_bucle_DW.previous_error = 0.0;
}

/* Model terminate function */
void control_bucle_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(1U);

  /* Terminate for S-Function (ev3_lcd): '<S1>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_lcd): '<S2>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_lcd): '<S3>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_motor): '<S6>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S7>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
