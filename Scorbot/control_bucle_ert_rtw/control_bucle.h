/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_bucle.h
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

#ifndef RTW_HEADER_control_bucle_h_
#define RTW_HEADER_control_bucle_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef control_bucle_COMMON_INCLUDES_
# define control_bucle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* control_bucle_COMMON_INCLUDES_ */

#include "control_bucle_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T integral;                     /* '<Root>/MATLAB Function1' */
  real_T previous_error;               /* '<Root>/MATLAB Function1' */
} DW_control_bucle_T;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  uint8_T LCD_p1[3];

  /* Expression: lcdStr1
   * Referenced by: '<S2>/LCD'
   */
  uint8_T LCD_p1_h[5];

  /* Expression: lcdStr1
   * Referenced by: '<S3>/LCD'
   */
  uint8_T LCD_p1_hm[6];
} ConstP_control_bucle_T;

/* Parameters (auto storage) */
struct P_control_bucle_T_ {
  real_T WINDUP_Value;                 /* Expression: 50
                                        * Referenced by: '<Root>/WINDUP'
                                        */
  real_T Kp_Value;                     /* Expression: 100
                                        * Referenced by: '<Root>/Kp '
                                        */
  real_T Kd_Value;                     /* Expression: 1
                                        * Referenced by: '<Root>/Kd'
                                        */
  real_T Ki_Value;                     /* Expression: 10
                                        * Referenced by: '<Root>/Ki'
                                        */
  real_T Potenciabase_Value;           /* Expression: 40
                                        * Referenced by: '<Root>/Potencia base'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 50
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -50
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 50
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -50
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_control_bucle_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_control_bucle_T control_bucle_P;

/* Block states (auto storage) */
extern DW_control_bucle_T control_bucle_DW;

/* Constant parameters (auto storage) */
extern const ConstP_control_bucle_T control_bucle_ConstP;

/* Model entry point functions */
extern void control_bucle_initialize(void);
extern void control_bucle_step(void);
extern void control_bucle_terminate(void);

/* Real-time Model object */
extern RT_MODEL_control_bucle_T *const control_bucle_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/SATURACION' : Unused code path elimination
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
 * '<Root>' : 'control_bucle'
 * '<S1>'   : 'control_bucle/Display'
 * '<S2>'   : 'control_bucle/Display1'
 * '<S3>'   : 'control_bucle/Display2'
 * '<S4>'   : 'control_bucle/MATLAB Function'
 * '<S5>'   : 'control_bucle/MATLAB Function1'
 * '<S6>'   : 'control_bucle/Motor'
 * '<S7>'   : 'control_bucle/Motor1'
 */
#endif                                 /* RTW_HEADER_control_bucle_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
