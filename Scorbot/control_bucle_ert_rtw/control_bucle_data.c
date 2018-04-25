/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_bucle_data.c
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

/* Block parameters (auto storage) */
P_control_bucle_T control_bucle_P = {
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/WINDUP'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<Root>/Kp '
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Kd'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Ki'
                                        */
  40.0,                                /* Expression: 40
                                        * Referenced by: '<Root>/Potencia base'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -50.0,                               /* Expression: -50
                                        * Referenced by: '<Root>/Saturation'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -50.0                                /* Expression: -50
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Constant parameters (auto storage) */
const ConstP_control_bucle_T control_bucle_ConstP = {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  { 71U, 99U, 0U },

  /* Expression: lcdStr1
   * Referenced by: '<S2>/LCD'
   */
  { 76U, 101U, 102U, 116U, 0U },

  /* Expression: lcdStr1
   * Referenced by: '<S3>/LCD'
   */
  { 82U, 105U, 103U, 104U, 116U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
