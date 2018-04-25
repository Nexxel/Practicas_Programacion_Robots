/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_loop.c
 *
 * Code generated for Simulink model 'control_loop'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 25 14:26:43 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_loop.h"
#include "control_loop_private.h"

/* Real-time model */
RT_MODEL_control_loop_T control_loop_M_;
RT_MODEL_control_loop_T *const control_loop_M = &control_loop_M_;

/* Model step function */
void control_loop_step(void)
{
  int32_T q1;
  int8_T tmp;
  int32_T power;
  boolean_T rtb_has_finished;
  int32_T rtb_right_motor;
  real_T rtb_Clock;

  /* S-Function (ev3_encoder): '<Root>/Encoder1' */
  q1 = getEncoderValueNoReset(2U);

  /* Clock: '<Root>/Clock' */
  rtb_Clock = control_loop_M->Timing.t[0];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  S-Function (ev3_encoder): '<Root>/Encoder1'
   */
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:3' if(timer < 2) */
  if (rtb_Clock < 2.0) {
    /* '<S3>:1:4' e = 860 - rotation; */
    if (q1 < -2147482787) {
      power = MAX_int32_T;
    } else {
      power = 860 - q1;
    }

    /* '<S3>:1:5' if e < 0 */
    if (power < 0) {
      /* '<S3>:1:6' power = max(e,-100) */
      if (!(power >= -100)) {
        power = -100;
      }
    } else {
      /* '<S3>:1:7' else */
      /* '<S3>:1:8' power = min(e,100) */
      if (!(power <= 100)) {
        power = 100;
      }
    }

    /* '<S3>:1:10' has_finished = false; */
    rtb_has_finished = false;

    /* '<S3>:1:11' left_motor = power; */
    /* '<S3>:1:12' right_motor = power; */
    rtb_right_motor = power;
  } else {
    /* '<S3>:1:13' else */
    /* '<S3>:1:14' left_motor = int32(0); */
    power = 0;

    /* '<S3>:1:15' right_motor = int32(0); */
    rtb_right_motor = 0;

    /* '<S3>:1:16' has_finished = true; */
    rtb_has_finished = true;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* If: '<Root>/If' */
  if (rtb_has_finished) {
    /* Outputs for IfAction SubSystem: '<Root>/Display Rotation ' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* S-Function (ev3_lcd): '<S6>/LCD' incorporates:
     *  S-Function (ev3_encoder): '<Root>/Encoder1'
     */
    lcdDisplay(q1, control_loop_ConstP.LCD_p1, 2U, 1U);

    /* End of Outputs for SubSystem: '<Root>/Display Rotation ' */
  }

  /* End of If: '<Root>/If' */

  /* S-Function (ev3_motor): '<S4>/Motor' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   */
  tmp = (int8_T)rtb_right_motor;
  setMotor(&tmp, 2U, 2U);

  /* S-Function (ev3_motor): '<S5>/Motor' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  tmp = (int8_T)power;
  setMotor(&tmp, 3U, 2U);

  /* Stop: '<Root>/Stop Simulation' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  if (rtb_Clock >= control_loop_P.CompareToConstant_const) {
    rtmSetStopRequested(control_loop_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  control_loop_M->Timing.t[0] =
    (++control_loop_M->Timing.clockTick0) * control_loop_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    control_loop_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void control_loop_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)control_loop_M, 0,
                sizeof(RT_MODEL_control_loop_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&control_loop_M->solverInfo,
                          &control_loop_M->Timing.simTimeStep);
    rtsiSetTPtr(&control_loop_M->solverInfo, &rtmGetTPtr(control_loop_M));
    rtsiSetStepSizePtr(&control_loop_M->solverInfo,
                       &control_loop_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&control_loop_M->solverInfo, (&rtmGetErrorStatus
      (control_loop_M)));
    rtsiSetRTModelPtr(&control_loop_M->solverInfo, control_loop_M);
  }

  rtsiSetSimTimeStep(&control_loop_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&control_loop_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(control_loop_M, &control_loop_M->Timing.tArray[0]);
  control_loop_M->Timing.stepSize0 = 0.1;

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
void control_loop_terminate(void)
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
