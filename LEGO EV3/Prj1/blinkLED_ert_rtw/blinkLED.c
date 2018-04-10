/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: blinkLED.c
 *
 * Code generated for Simulink model 'blinkLED'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 13:26:28 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "blinkLED.h"
#include "blinkLED_private.h"

/* Real-time model */
RT_MODEL_blinkLED_T blinkLED_M_;
RT_MODEL_blinkLED_T *const blinkLED_M = &blinkLED_M_;

/* Model step function */
void blinkLED_step(void)
{
  int8_T tmp;
  real_T tmp_0;

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp_0 = floor(blinkLED_P.Constant_Value);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  /* S-Function (ev3_led): '<S1>/Status Lights' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
  tmp = (int8_T)(tmp_0 < 0.0 ? (int32_T)(int8_T)-(int8_T)(uint8_T)-tmp_0 :
                 (int32_T)(int8_T)(uint8_T)tmp_0);
  setLED(&tmp);
}

/* Model initialize function */
void blinkLED_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(blinkLED_M, (NULL));

  /* Start for S-Function (ev3_led): '<S1>/Status Lights' */
  initLED();
}

/* Model terminate function */
void blinkLED_terminate(void)
{
  /* Terminate for S-Function (ev3_led): '<S1>/Status Lights' */
  terminateLED();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
