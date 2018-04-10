/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: followAndAvoidBlocksDeploy.c
 *
 * Code generated for Simulink model 'followAndAvoidBlocksDeploy'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Mar 21 14:36:15 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "followAndAvoidBlocksDeploy.h"
#include "followAndAvoidBlocksDeploy_private.h"

/* Real-time model */
RT_MODEL_followAndAvoidBlocks_T followAndAvoidBlocksDeploy_M_;
RT_MODEL_followAndAvoidBlocks_T *const followAndAvoidBlocksDeploy_M =
  &followAndAvoidBlocksDeploy_M_;

/* Model step function */
void followAndAvoidBlocksDeploy_step(void)
{
  uint8_T rtb_ColorSensor_0;
  int8_T tmp;
  real_T rtb_ControllerGain;
  boolean_T rtb_Compare;
  real_T rtb_Saturation1;
  uint8_T tmp_0;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  rtb_ColorSensor_0 = getColorSensorValue(3U, 1U);

  /* S-Function (ev3_lcd): '<S2>/LCD' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  tmp_0 = 0U;
  lcdDisplay(rtb_ColorSensor_0, &tmp_0, 1U, 1U);

  /* Gain: '<Root>/Controller Gain ' incorporates:
   *  Constant: '<Root>/Light intensity  Threshold '
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   *  Sum: '<Root>/Sum'
   */
  rtb_ControllerGain = ((real_T)rtb_ColorSensor_0 -
                        followAndAvoidBlocksDeploy_P.LightintensityThreshold_Value)
    * followAndAvoidBlocksDeploy_P.ControllerGain_Gain;

  /* S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  rtb_ColorSensor_0 = getUltrasonicSensorValue(4U);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor'
   */
  rtb_Compare = (rtb_ColorSensor_0 >=
                 followAndAvoidBlocksDeploy_P.CompareToConstant_const);

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Idle speed  '
   *  Constant: '<Root>/Nominal speed '
   *  Sum: '<Root>/Sum1'
   */
  if (rtb_Compare) {
    rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Nominalspeed_Value -
      rtb_ControllerGain;
  } else {
    rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Idlespeed_Value;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Saturation1 > followAndAvoidBlocksDeploy_P.Saturation_UpperSat) {
    rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Saturation_UpperSat;
  } else {
    if (rtb_Saturation1 < followAndAvoidBlocksDeploy_P.Saturation_LowerSat) {
      rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  rtb_Saturation1 = floor(rtb_Saturation1);
  if (rtb_Saturation1 < 128.0) {
    if (rtb_Saturation1 >= -128.0) {
      /* S-Function (ev3_motor): '<S3>/Motor' */
      tmp = (int8_T)rtb_Saturation1;
    } else {
      /* S-Function (ev3_motor): '<S3>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S3>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S3>/Motor' */
  setMotor(&tmp, 2U, 2U);

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Idle speed  '
   *  Constant: '<Root>/Nominal speed '
   *  Sum: '<Root>/Sum2'
   */
  if (rtb_Compare) {
    rtb_Saturation1 = rtb_ControllerGain +
      followAndAvoidBlocksDeploy_P.Nominalspeed_Value;
  } else {
    rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Idlespeed_Value;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_Saturation1 > followAndAvoidBlocksDeploy_P.Saturation1_UpperSat) {
    rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Saturation1_UpperSat;
  } else {
    if (rtb_Saturation1 < followAndAvoidBlocksDeploy_P.Saturation1_LowerSat) {
      rtb_Saturation1 = followAndAvoidBlocksDeploy_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  rtb_Saturation1 = floor(rtb_Saturation1);
  if (rtb_Saturation1 < 128.0) {
    if (rtb_Saturation1 >= -128.0) {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp = (int8_T)rtb_Saturation1;
    } else {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S4>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S4>/Motor' */
  setMotor(&tmp, 3U, 2U);
}

/* Model initialize function */
void followAndAvoidBlocksDeploy_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(followAndAvoidBlocksDeploy_M, (NULL));

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(3U, 1U);

  /* Start for S-Function (ev3_lcd): '<S2>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  initUltrasonicSensor(4U);

  /* Start for S-Function (ev3_motor): '<S3>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S4>/Motor' */
  initMotor(3U);
}

/* Model terminate function */
void followAndAvoidBlocksDeploy_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(3U);

  /* Terminate for S-Function (ev3_lcd): '<S2>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  terminateUltrasonicSensor(4U);

  /* Terminate for S-Function (ev3_motor): '<S3>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S4>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
