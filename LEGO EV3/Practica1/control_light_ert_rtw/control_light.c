/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_light.c
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

#include "control_light.h"
#include "control_light_private.h"

/* Real-time model */
RT_MODEL_control_light_T control_light_M_;
RT_MODEL_control_light_T *const control_light_M = &control_light_M_;

/* Model step function */
void control_light_step(void)
{
  uint8_T tmp;
  int8_T tmp_0;
  int32_T rtb_left_motor;
  int32_T rtb_right_motor;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  tmp = getColorSensorValue(3U, 2U);

  /* S-Function (ev3_lcd): '<S1>/LCD' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  lcdDisplay(tmp, control_light_ConstP.LCD_p1, 2U, 1U);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  /* '<S2>:1:2' R = 55; */
  /* '<S2>:1:3' U = 5; */
  /* '<S2>:1:4' P = 20; */
  /* '<S2>:1:5' if color_intensity < R - U */
  if (tmp < 50) {
    /* '<S2>:1:6' left_motor = -P; */
    rtb_left_motor = -20;

    /* '<S2>:1:7' right_motor = P; */
    rtb_right_motor = 20;
  } else if (tmp > 60) {
    /* '<S2>:1:8' elseif color_intensity > R + U */
    /* '<S2>:1:9' left_motor = P; */
    rtb_left_motor = 20;

    /* '<S2>:1:10' right_motor = -P; */
    rtb_right_motor = -20;
  } else {
    /* '<S2>:1:11' else */
    /* '<S2>:1:12' left_motor = P; */
    rtb_left_motor = 20;

    /* '<S2>:1:13' right_motor = P; */
    rtb_right_motor = 20;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* S-Function (ev3_motor): '<S3>/Motor' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  /* pause(10); */
  tmp_0 = (int8_T)rtb_left_motor;
  setMotor(&tmp_0, 2U, 2U);

  /* S-Function (ev3_motor): '<S4>/Motor' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   */
  tmp_0 = (int8_T)rtb_right_motor;
  setMotor(&tmp_0, 3U, 2U);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  control_light_M->Timing.t[0] =
    (++control_light_M->Timing.clockTick0) * control_light_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    control_light_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void control_light_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)control_light_M, 0,
                sizeof(RT_MODEL_control_light_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&control_light_M->solverInfo,
                          &control_light_M->Timing.simTimeStep);
    rtsiSetTPtr(&control_light_M->solverInfo, &rtmGetTPtr(control_light_M));
    rtsiSetStepSizePtr(&control_light_M->solverInfo,
                       &control_light_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&control_light_M->solverInfo, (&rtmGetErrorStatus
      (control_light_M)));
    rtsiSetRTModelPtr(&control_light_M->solverInfo, control_light_M);
  }

  rtsiSetSimTimeStep(&control_light_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&control_light_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(control_light_M, &control_light_M->Timing.tArray[0]);
  control_light_M->Timing.stepSize0 = 0.1;

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(3U, 2U);

  /* Start for S-Function (ev3_lcd): '<S1>/LCD' */
  initLCD();

  /* Start for S-Function (ev3_motor): '<S3>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S4>/Motor' */
  initMotor(3U);
}

/* Model terminate function */
void control_light_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(3U);

  /* Terminate for S-Function (ev3_lcd): '<S1>/LCD' */
  terminateLCD();

  /* Terminate for S-Function (ev3_motor): '<S3>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S4>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
