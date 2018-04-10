/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: followAndAvoidBlocksDeploy.h
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

#ifndef RTW_HEADER_followAndAvoidBlocksDeploy_h_
#define RTW_HEADER_followAndAvoidBlocksDeploy_h_
#include <math.h>
#include <stddef.h>
#ifndef followAndAvoidBlocksDeploy_COMMON_INCLUDES_
# define followAndAvoidBlocksDeploy_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* followAndAvoidBlocksDeploy_COMMON_INCLUDES_ */

#include "followAndAvoidBlocksDeploy_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Parameters (auto storage) */
struct P_followAndAvoidBlocksDeploy_T_ {
  uint8_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T LightintensityThreshold_Value;/* Expression: 10
                                        * Referenced by: '<Root>/Light intensity  Threshold '
                                        */
  real_T ControllerGain_Gain;          /* Expression: 2.5
                                        * Referenced by: '<Root>/Controller Gain '
                                        */
  real_T Nominalspeed_Value;           /* Expression: 30
                                        * Referenced by: '<Root>/Nominal speed '
                                        */
  real_T Idlespeed_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Idle speed  '
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 100
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -100
                                        * Referenced by: '<Root>/Saturation1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_followAndAvoidBlocksD_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_followAndAvoidBlocksDeploy_T followAndAvoidBlocksDeploy_P;

/* Model entry point functions */
extern void followAndAvoidBlocksDeploy_initialize(void);
extern void followAndAvoidBlocksDeploy_step(void);
extern void followAndAvoidBlocksDeploy_terminate(void);

/* Real-time Model object */
extern RT_MODEL_followAndAvoidBlocks_T *const followAndAvoidBlocksDeploy_M;

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
 * '<Root>' : 'followAndAvoidBlocksDeploy'
 * '<S1>'   : 'followAndAvoidBlocksDeploy/Compare To Constant'
 * '<S2>'   : 'followAndAvoidBlocksDeploy/Display1'
 * '<S3>'   : 'followAndAvoidBlocksDeploy/Motor'
 * '<S4>'   : 'followAndAvoidBlocksDeploy/Motor1'
 */
#endif                                 /* RTW_HEADER_followAndAvoidBlocksDeploy_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
