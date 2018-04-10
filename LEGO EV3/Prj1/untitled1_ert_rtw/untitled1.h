/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled1.h
 *
 * Code generated for Simulink model 'untitled1'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 13:57:32 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled1_h_
#define RTW_HEADER_untitled1_h_
#include <stddef.h>
#ifndef untitled1_COMMON_INCLUDES_
# define untitled1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* untitled1_COMMON_INCLUDES_ */

#include "untitled1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_untitled1_T {
  const char_T *errorStatus;
};

/* Model entry point functions */
extern void untitled1_initialize(void);
extern void untitled1_step(void);
extern void untitled1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled1_T *const untitled1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Actual distance' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Final robot speed ' : Unused code path elimination
 * Block '<Root>/Product' : Unused code path elimination
 * Block '<Root>/Relational Operator' : Unused code path elimination
 * Block '<Root>/Threshold' : Unused code path elimination
 */

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
 * '<Root>' : 'untitled1'
 */
#endif                                 /* RTW_HEADER_untitled1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
