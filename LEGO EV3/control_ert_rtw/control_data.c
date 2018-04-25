/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_data.c
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 25 14:31:59 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control.h"
#include "control_private.h"

/* Block parameters (auto storage) */
P_control_T control_P = {
  5.0,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  50.0                                 /* Expression: 50
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Constant parameters (auto storage) */
const ConstP_control_T control_ConstP = {
  /* Expression: lcdStr1
   * Referenced by: '<S6>/LCD'
   */
  { 82U, 111U, 116U, 58U, 32U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
