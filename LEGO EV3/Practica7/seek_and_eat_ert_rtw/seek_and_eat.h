/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: seek_and_eat.h
 *
 * Code generated for Simulink model 'seek_and_eat'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 30 14:02:54 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_seek_and_eat_h_
#define RTW_HEADER_seek_and_eat_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef seek_and_eat_COMMON_INCLUDES_
# define seek_and_eat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* seek_and_eat_COMMON_INCLUDES_ */

#include "seek_and_eat_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T eating_per;                   /* '<Root>/Eat ' */
  uint32_T method;                     /* '<Root>/Collision Avoidance' */
  uint32_T state;                      /* '<Root>/Collision Avoidance' */
  uint32_T state_o[2];                 /* '<Root>/Collision Avoidance' */
  uint32_T state_e[625];               /* '<Root>/Collision Avoidance' */
  boolean_T state_not_empty;           /* '<Root>/Collision Avoidance' */
} DW_seek_and_eat_T;

/* Parameters (auto storage) */
struct P_seek_and_eat_T_ {
  real_T Saturation_UpperSat;          /* Expression: 45
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -15
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 35
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -15
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_seek_and_eat_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_seek_and_eat_T seek_and_eat_P;

/* Block states (auto storage) */
extern DW_seek_and_eat_T seek_and_eat_DW;

/* Model entry point functions */
extern void seek_and_eat_initialize(void);
extern void seek_and_eat_step(void);
extern void seek_and_eat_terminate(void);

/* Real-time Model object */
extern RT_MODEL_seek_and_eat_T *const seek_and_eat_M;

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
 * '<Root>' : 'seek_and_eat'
 * '<S1>'   : 'seek_and_eat/Collision Avoidance'
 * '<S2>'   : 'seek_and_eat/Derecho'
 * '<S3>'   : 'seek_and_eat/Eat '
 * '<S4>'   : 'seek_and_eat/Izquierdo '
 */
#endif                                 /* RTW_HEADER_seek_and_eat_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
