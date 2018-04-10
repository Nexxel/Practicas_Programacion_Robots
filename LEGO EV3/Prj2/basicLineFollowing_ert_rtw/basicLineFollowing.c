/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: basicLineFollowing.c
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

#include "basicLineFollowing.h"
#include "basicLineFollowing_private.h"

/* Real-time model */
RT_MODEL_basicLineFollowing_T basicLineFollowing_M_;
RT_MODEL_basicLineFollowing_T *const basicLineFollowing_M =
  &basicLineFollowing_M_;

/* Model step function */
void basicLineFollowing_step(void)
{
  uint8_T rtb_ColorSensor_0;
  int8_T tmp;
  real_T rtb_Saturation1;
  real_T u0;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  rtb_ColorSensor_0 = getColorSensorValue(3U, 2U);

  /* S-Function (ev3_lcd): '<S1>/LCD' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  lcdDisplay(rtb_ColorSensor_0, basicLineFollowing_ConstP.LCD_p1, 2U, 1U);

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Light intensity  Threshold '
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  rtb_Saturation1 = (real_T)rtb_ColorSensor_0 -
    basicLineFollowing_P.LightintensityThreshold_Value;

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  u0 = floor(rtb_Saturation1);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  /* S-Function (ev3_lcd): '<S2>/LCD' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  lcdDisplay(u0 < 0.0 ? -(int32_T)(uint32_T)-u0 : (int32_T)(uint32_T)u0,
             basicLineFollowing_ConstP.LCD_p1_e, 3U, 1U);

  /* Gain: '<Root>/Controller Gain ' */
  rtb_Saturation1 *= basicLineFollowing_P.ControllerGain_Gain;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Nominal speed '
   */
  u0 = basicLineFollowing_P.Nominalspeed_Value - rtb_Saturation1;

  /* Saturate: '<Root>/Saturation' */
  if (u0 > basicLineFollowing_P.Saturation_UpperSat) {
    u0 = basicLineFollowing_P.Saturation_UpperSat;
  } else {
    if (u0 < basicLineFollowing_P.Saturation_LowerSat) {
      u0 = basicLineFollowing_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  u0 = floor(u0);
  if (u0 < 128.0) {
    if (u0 >= -128.0) {
      /* S-Function (ev3_motor): '<S3>/Motor' */
      tmp = (int8_T)u0;
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

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/Nominal speed '
   */
  rtb_Saturation1 += basicLineFollowing_P.Nominalspeed_Value;

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_Saturation1 > basicLineFollowing_P.Saturation1_UpperSat) {
    rtb_Saturation1 = basicLineFollowing_P.Saturation1_UpperSat;
  } else {
    if (rtb_Saturation1 < basicLineFollowing_P.Saturation1_LowerSat) {
      rtb_Saturation1 = basicLineFollowing_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  u0 = floor(rtb_Saturation1);
  if (u0 < 128.0) {
    if (u0 >= -128.0) {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp = (int8_T)u0;
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
void basicLineFollowing_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(basicLineFollowing_M, (NULL));

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(3U, 2U);

  /* Start for S-Function (ev3_lcd): '<S1>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_lcd): '<S2>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_motor): '<S3>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S4>/Motor' */
  initMotor(3U);
}

/* Model terminate function */
void basicLineFollowing_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(3U);

  /* Terminate for S-Function (ev3_lcd): '<S1>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_lcd): '<S2>/LCD' */
  terminateLCD();

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
