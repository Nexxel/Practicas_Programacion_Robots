/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_light.h
 *
 * Code generated for Simulink model 'control_light'.
 *
 * Model version                  : 1.35
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 04 14:35:23 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_control_light_h_
#define RTW_HEADER_control_light_h_
#include <string.h>
#include <stddef.h>
#ifndef control_light_COMMON_INCLUDES_
# define control_light_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* control_light_COMMON_INCLUDES_ */

#include "control_light_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  uint8_T LCD_p1[7];
} ConstP_control_light_T;

/* Real-time Model Data Structure */
struct tag_RTM_control_light_T {
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
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Constant parameters (auto storage) */
extern const ConstP_control_light_T control_light_ConstP;

/* Model entry point functions */
extern void control_light_initialize(void);
extern void control_light_step(void);
extern void control_light_terminate(void);

/* Real-time Model object */
extern RT_MODEL_control_light_T *const control_light_M;

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
 * '<Root>' : 'control_light'
 * '<S1>'   : 'control_light/Display'
 * '<S2>'   : 'control_light/MATLAB Function'
 * '<S3>'   : 'control_light/Motor'
 * '<S4>'   : 'control_light/Motor1'
 */
#endif                                 /* RTW_HEADER_control_light_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
