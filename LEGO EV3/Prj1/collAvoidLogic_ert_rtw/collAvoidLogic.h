/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: collAvoidLogic.h
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

#ifndef RTW_HEADER_collAvoidLogic_h_
#define RTW_HEADER_collAvoidLogic_h_
#include <math.h>
#include <stddef.h>
#ifndef collAvoidLogic_COMMON_INCLUDES_
# define collAvoidLogic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* collAvoidLogic_COMMON_INCLUDES_ */

#include "collAvoidLogic_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Parameters (auto storage) */
struct P_collAvoidLogic_T_ {
  real_T Threshold_Value;              /* Expression: 20
                                        * Referenced by: '<Root>/Threshold'
                                        */
  real_T Constant2_Value;              /* Expression: 35
                                        * Referenced by: '<Root>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_collAvoidLogic_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_collAvoidLogic_T collAvoidLogic_P;

/* Model entry point functions */
extern void collAvoidLogic_initialize(void);
extern void collAvoidLogic_step(void);
extern void collAvoidLogic_terminate(void);

/* Real-time Model object */
extern RT_MODEL_collAvoidLogic_T *const collAvoidLogic_M;

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
 * '<Root>' : 'collAvoidLogic'
 * '<S1>'   : 'collAvoidLogic/Motor'
 * '<S2>'   : 'collAvoidLogic/Motor1'
 */
#endif                                 /* RTW_HEADER_collAvoidLogic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
