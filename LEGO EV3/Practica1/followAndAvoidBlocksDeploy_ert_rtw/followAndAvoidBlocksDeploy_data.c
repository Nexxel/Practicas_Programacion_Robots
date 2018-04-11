/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: followAndAvoidBlocksDeploy_data.c
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

/* Block parameters (auto storage) */
P_followAndAvoidBlocksDeploy_T followAndAvoidBlocksDeploy_P = {
  20U,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Light intensity  Threshold '
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Controller Gain '
                                        */
  30.0,                                /* Expression: 30
                                        * Referenced by: '<Root>/Nominal speed '
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Idle speed  '
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -100.0,                              /* Expression: -100
                                        * Referenced by: '<Root>/Saturation'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -100.0                               /* Expression: -100
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
