/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control.c
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 25 14:31:59 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control.h"
#include "control_private.h"

/* Real-time model */
RT_MODEL_control_T control_M_;
RT_MODEL_control_T *const control_M = &control_M_;

/* Model step function */
void control_step(void)
{
  int32_T tmp;
  int8_T tmp_0;
  boolean_T rtb_has_finished;
  real_T rtb_right_motor;
  real_T rtb_left_motor;
  real_T rtb_Clock;

  /* Clock: '<Root>/Clock' */
  rtb_Clock = control_M->Timing.t[0];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Constant'
   */
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:3' if(timer < 2) */
  if (rtb_Clock < 2.0) {
    /* '<S3>:1:4' has_finished = false; */
    rtb_has_finished = false;

    /* '<S3>:1:5' left_motor = power; */
    rtb_left_motor = control_P.Constant_Value;

    /* '<S3>:1:6' right_motor = power; */
    rtb_right_motor = control_P.Constant_Value;
  } else {
    /* '<S3>:1:7' else */
    /* '<S3>:1:8' left_motor = 0; */
    rtb_left_motor = 0.0;

    /* '<S3>:1:9' right_motor = 0; */
    rtb_right_motor = 0.0;

    /* '<S3>:1:10' has_finished = true; */
    rtb_has_finished = true;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* S-Function (ev3_encoder): '<Root>/Encoder1' */
  tmp = getEncoderValueNoReset(2U);

  /* If: '<Root>/If' */
  if (rtb_has_finished) {
    /* Outputs for IfAction SubSystem: '<Root>/Display Rotation ' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* S-Function (ev3_lcd): '<S6>/LCD' incorporates:
     *  S-Function (ev3_encoder): '<Root>/Encoder1'
     */
    lcdDisplay(tmp, control_ConstP.LCD_p1, 2U, 1U);

    /* End of Outputs for SubSystem: '<Root>/Display Rotation ' */
  }

  /* End of If: '<Root>/If' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  rtb_right_motor = floor(rtb_right_motor);
  if (rtb_right_motor < 128.0) {
    if (rtb_right_motor >= -128.0) {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp_0 = (int8_T)rtb_right_motor;
    } else {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp_0 = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S4>/Motor' */
    tmp_0 = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S4>/Motor' */
  setMotor(&tmp_0, 2U, 2U);

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  rtb_right_motor = floor(rtb_left_motor);
  if (rtb_right_motor < 128.0) {
    if (rtb_right_motor >= -128.0) {
      /* S-Function (ev3_motor): '<S5>/Motor' */
      tmp_0 = (int8_T)rtb_right_motor;
    } else {
      /* S-Function (ev3_motor): '<S5>/Motor' */
      tmp_0 = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S5>/Motor' */
    tmp_0 = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S5>/Motor' */
  setMotor(&tmp_0, 3U, 2U);

  /* Stop: '<Root>/Stop Simulation' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  if (rtb_Clock >= control_P.CompareToConstant_const) {
    rtmSetStopRequested(control_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  control_M->Timing.t[0] =
    (++control_M->Timing.clockTick0) * control_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    control_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void control_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)control_M, 0,
                sizeof(RT_MODEL_control_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&control_M->solverInfo, &control_M->Timing.simTimeStep);
    rtsiSetTPtr(&control_M->solverInfo, &rtmGetTPtr(control_M));
    rtsiSetStepSizePtr(&control_M->solverInfo, &control_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&control_M->solverInfo, (&rtmGetErrorStatus(control_M)));
    rtsiSetRTModelPtr(&control_M->solverInfo, control_M);
  }

  rtsiSetSimTimeStep(&control_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&control_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(control_M, &control_M->Timing.tArray[0]);
  control_M->Timing.stepSize0 = 0.1;

  /* Start for S-Function (ev3_encoder): '<Root>/Encoder1' */
  initEncoder(2U);

  /* Start for IfAction SubSystem: '<Root>/Display Rotation ' */
  /* Start for S-Function (ev3_lcd): '<S6>/LCD' */
  initLCD();

  /* End of Start for SubSystem: '<Root>/Display Rotation ' */

  /* Start for S-Function (ev3_motor): '<S4>/Motor' */
  initMotor(2U);

  /* Start for S-Function (ev3_motor): '<S5>/Motor' */
  initMotor(3U);
}

/* Model terminate function */
void control_terminate(void)
{
  /* Terminate for S-Function (ev3_encoder): '<Root>/Encoder1' */
  terminateEncoder(2U);

  /* Terminate for IfAction SubSystem: '<Root>/Display Rotation ' */
  /* Terminate for S-Function (ev3_lcd): '<S6>/LCD' */
  terminateLCD();

  /* End of Terminate for SubSystem: '<Root>/Display Rotation ' */

  /* Terminate for S-Function (ev3_motor): '<S4>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S5>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
