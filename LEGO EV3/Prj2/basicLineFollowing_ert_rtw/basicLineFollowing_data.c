/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: basicLineFollowing_data.c
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

/* Block parameters (auto storage) */
P_basicLineFollowing_T basicLineFollowing_P = {
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Light intensity  Threshold '
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Controller Gain '
                                        */
  30.0,                                /* Expression: 30
                                        * Referenced by: '<Root>/Nominal speed '
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<Root>/Saturation'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -0.5                                 /* Expression: -0.5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Constant parameters (auto storage) */
const ConstP_basicLineFollowing_T basicLineFollowing_ConstP = {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  { 73U, 110U, 116U, 58U, 32U, 0U },

  /* Expression: lcdStr1
   * Referenced by: '<S2>/LCD'
   */
  { 67U, 111U, 109U, 112U, 58U, 32U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
