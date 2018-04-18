/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: displaySensorReading.c
 *
 * Code generated for Simulink model 'displaySensorReading'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 13:49:10 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "displaySensorReading.h"
#include "displaySensorReading_private.h"

/* Real-time model */
RT_MODEL_displaySensorReading_T displaySensorReading_M_;
RT_MODEL_displaySensorReading_T *const displaySensorReading_M =
  &displaySensorReading_M_;

/* Model step function */
void displaySensorReading_step(void)
{
  uint8_T rtb_ColorSensor_0;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  rtb_ColorSensor_0 = getColorSensorValue(3U, 2U);

  /* S-Function (ev3_lcd): '<S1>/LCD' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  lcdDisplay(rtb_ColorSensor_0, displaySensorReading_ConstP.LCD_p1, 2U, 1U);
}

/* Model initialize function */
void displaySensorReading_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(displaySensorReading_M, (NULL));

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(3U, 2U);

  /* Start for S-Function (ev3_lcd): '<S1>/LCD' */
  initLCD();
}

/* Model terminate function */
void displaySensorReading_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(3U);

  /* Terminate for S-Function (ev3_lcd): '<S1>/LCD' */
  terminateLCD();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
