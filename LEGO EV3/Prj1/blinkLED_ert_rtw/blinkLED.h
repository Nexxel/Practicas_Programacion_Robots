/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: blinkLED.h
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

#ifndef RTW_HEADER_blinkLED_h_
#define RTW_HEADER_blinkLED_h_
#include <math.h>
#include <stddef.h>
#ifndef blinkLED_COMMON_INCLUDES_
# define blinkLED_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* blinkLED_COMMON_INCLUDES_ */

#include "blinkLED_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Parameters (auto storage) */
struct P_blinkLED_T_ {
  real_T Constant_Value;               /* Expression: 4
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_blinkLED_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_blinkLED_T blinkLED_P;

/* Model entry point functions */
extern void blinkLED_initialize(void);
extern void blinkLED_step(void);
extern void blinkLED_terminate(void);

/* Real-time Model object */
extern RT_MODEL_blinkLED_T *const blinkLED_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'blinkLED'
 * '<S1>'   : 'blinkLED/Status Light'
 */
#endif                                 /* RTW_HEADER_blinkLED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
