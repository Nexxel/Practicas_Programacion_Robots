/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: collAvoidLogic.c
 *
 * Code generated for Simulink model 'collAvoidLogic'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 14:04:53 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "collAvoidLogic.h"
#include "collAvoidLogic_private.h"

/* Real-time model */
RT_MODEL_collAvoidLogic_T collAvoidLogic_M_;
RT_MODEL_collAvoidLogic_T *const collAvoidLogic_M = &collAvoidLogic_M_;

/* Model step function */
void collAvoidLogic_step(void)
{
  uint8_T rtb_Acutaldistance_0;
  int8_T tmp;
  real_T rtb_Product;
  real_T tmp_0;

  /* S-Function (ev3_ultrasonic_sensor): '<Root>/Acutal distance ' */
  rtb_Acutaldistance_0 = getUltrasonicSensorValue(4U);

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Threshold'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  S-Function (ev3_ultrasonic_sensor): '<Root>/Acutal distance '
   */
  rtb_Product = (real_T)(rtb_Acutaldistance_0 >=
    collAvoidLogic_P.Threshold_Value) * collAvoidLogic_P.Constant2_Value;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  tmp_0 = floor(rtb_Product);
  if (tmp_0 < 128.0) {
    if (tmp_0 >= -128.0) {
      /* S-Function (ev3_motor): '<S1>/Motor' */
      tmp = (int8_T)tmp_0;
    } else {
      /* S-Function (ev3_motor): '<S1>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S1>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S1>/Motor' */
  setMotor(&tmp, 2U, 2U);

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  tmp_0 = floor(rtb_Product);
  if (tmp_0 < 128.0) {
    if (tmp_0 >= -128.0) {
      /* S-Function (ev3_motor): '<S2>/Motor' */
      tmp = (int8_T)tmp_0;
    } else {
      /* S-Function (ev3_motor): '<S2>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S2>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S2>/Motor' */
  setMotor(&tmp, 3U, 2U);
}

/* Model initialize function */
void collAvoidLogic_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(collAvoidLogic_M, (NULL));

  /* Start for S-Function (ev3_ultrasonic_sensor): '<Root>/Acutal distance ' */
  initUltrasonicSensor(4U);

  /* Start for S-Function (ev3_motor): '<S1>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S2>/Motor' */
  initMotor(3U);
}

/* Model terminate function */
void collAvoidLogic_terminate(void)
{
  /* Terminate for S-Function (ev3_ultrasonic_sensor): '<Root>/Acutal distance ' */
  terminateUltrasonicSensor(4U);

  /* Terminate for S-Function (ev3_motor): '<S1>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S2>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
