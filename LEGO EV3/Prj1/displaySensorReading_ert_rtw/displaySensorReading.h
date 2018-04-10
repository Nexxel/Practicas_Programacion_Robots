/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: displaySensorReading.h
 *
 * Code generated for Simulink model 'displaySensorReading'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Mar 19 13:49:10 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_displaySensorReading_h_
#define RTW_HEADER_displaySensorReading_h_
#include <stddef.h>
#ifndef displaySensorReading_COMMON_INCLUDES_
# define displaySensorReading_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* displaySensorReading_COMMON_INCLUDES_ */

#include "displaySensorReading_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: lcdStr1
   * Referenced by: '<S1>/LCD'
   */
  uint8_T LCD_p1[6];
} ConstP_displaySensorReading_T;

/* Real-time Model Data Structure */
struct tag_RTM_displaySensorReading_T {
  const char_T *errorStatus;
};

/* Constant parameters (auto storage) */
extern const ConstP_displaySensorReading_T displaySensorReading_ConstP;

/* Model entry point functions */
extern void displaySensorReading_initialize(void);
extern void displaySensorReading_step(void);
extern void displaySensorReading_terminate(void);

/* Real-time Model object */
extern RT_MODEL_displaySensorReading_T *const displaySensorReading_M;

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
 * '<Root>' : 'displaySensorReading'
 * '<S1>'   : 'displaySensorReading/Display'
 */
#endif                                 /* RTW_HEADER_displaySensorReading_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
