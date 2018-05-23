/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pr5.h
 *
 * Code generated for Simulink model 'pr5'.
 *
 * Model version                  : 1.69
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 23 13:21:38 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_pr5_h_
#define RTW_HEADER_pr5_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef pr5_COMMON_INCLUDES_
# define pr5_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* pr5_COMMON_INCLUDES_ */

#include "pr5_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals (auto storage) */
typedef struct {
  char_T b[38];
  char_T b_m[37];
  real_T delta_encl;
  real_T delta_encr;
} B_pr5_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T D;                            /* '<Root>/odometer' */
  real_T R;                            /* '<Root>/odometer' */
  real_T x0;                           /* '<Root>/odometer' */
  real_T y0;                           /* '<Root>/odometer' */
  real_T w0;                           /* '<Root>/odometer' */
  real_T t0;                           /* '<Root>/odometer' */
  real_T prev_enc_l;                   /* '<Root>/odometer' */
  real_T prev_enc_r;                   /* '<Root>/odometer' */
  real_T file;                         /* '<Root>/odometer' */
  real_T counter;                      /* '<Root>/MATLAB Function' */
  real_T iteration;                    /* '<Root>/MATLAB Function' */
  real_T file_g;                       /* '<Root>/MATLAB Function' */
  boolean_T x0_not_empty;              /* '<Root>/odometer' */
  boolean_T eml_autoflush[20];         /* '<Root>/odometer' */
  boolean_T counter_not_empty;         /* '<Root>/MATLAB Function' */
  boolean_T isTurning;                 /* '<Root>/MATLAB Function' */
  boolean_T eml_autoflush_a[20];       /* '<Root>/MATLAB Function' */
  FILE * eml_openfiles[20];            /* '<Root>/MATLAB Function' */
  FILE * eml_openfiles_a[20];          /* '<Root>/odometer' */
} DW_pr5_T;

/* Parameters (auto storage) */
struct P_pr5_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S2>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pr5_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_pr5_T pr5_P;

/* Block signals (auto storage) */
extern B_pr5_T pr5_B;

/* Block states (auto storage) */
extern DW_pr5_T pr5_DW;

/* Model entry point functions */
extern void pr5_initialize(void);
extern void pr5_step(void);
extern void pr5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_pr5_T *const pr5_M;

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
 * '<Root>' : 'pr5'
 * '<S1>'   : 'pr5/Compare To Constant'
 * '<S2>'   : 'pr5/Compare To Constant1'
 * '<S3>'   : 'pr5/Left Motor'
 * '<S4>'   : 'pr5/MATLAB Function'
 * '<S5>'   : 'pr5/Right motor '
 * '<S6>'   : 'pr5/odometer'
 */
#endif                                 /* RTW_HEADER_pr5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
