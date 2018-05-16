/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pr5.c
 *
 * Code generated for Simulink model 'pr5'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 16 14:11:30 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pr5.h"
#include "pr5_private.h"

/* Block signals (auto storage) */
B_pr5_T pr5_B;

/* Block states (auto storage) */
DW_pr5_T pr5_DW;

/* Real-time model */
RT_MODEL_pr5_T pr5_M_;
RT_MODEL_pr5_T *const pr5_M = &pr5_M_;

/* Forward declaration for local functions */
static int8_T pr5_filedata(void);
static real_T pr5_fileManager(void);
static real_T pr5_fopen(void);
static void pr5_fileManager_m(real_T varargin_1, FILE * *f, boolean_T *a);
static int32_T pr5_cfprintf(real_T fileID, real_T varargin_1, real_T varargin_2,
  real_T varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6);
static FILE * pr5_fileManager_mqx(int8_T varargin_1);
static int32_T pr5_fileManager_mq(real_T varargin_1);
static void pr5_fclose(real_T fileID);

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int8_T pr5_filedata(void)
{
  int8_T f;
  int8_T k;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 21)) {
    if (pr5_DW.eml_openfiles[k - 1] == NULL) {
      f = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T pr5_fileManager(void)
{
  int8_T fileid;
  int8_T j;
  FILE * filestar;
  static const char_T b[37] = { '/', 'h', 'o', 'm', 'e', '/', 'r', 'o', 'o', 't',
    '/', 'l', 'm', 's', '2', '0', '1', '2', '/', 'p', 'r', 'j', 's', '/', 'm',
    'w', '/', 'm', 'y', 'l', 'o', 'g', '.', 't', 'x', 't', '\x00' };

  char_T c[3];
  int32_T i;
  fileid = -1;
  j = pr5_filedata();
  if (!(j < 1)) {
    for (i = 0; i < 37; i++) {
      pr5_B.b[i] = b[i];
    }

    c[0] = 'w';
    c[1] = 'b';
    c[2] = '\x00';
    filestar = fopen(pr5_B.b, c);
    if (filestar != NULL) {
      pr5_DW.eml_openfiles[j - 1] = filestar;
      pr5_DW.eml_autoflush[j - 1] = true;
      i = j + 2;
      if (i > 127) {
        i = 127;
      }

      fileid = (int8_T)i;
    }
  }

  return fileid;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T pr5_fopen(void)
{
  return pr5_fileManager();
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void pr5_fileManager_m(real_T varargin_1, FILE * *f, boolean_T *a)
{
  int8_T fileid;
  fileid = (int8_T)rt_roundd_snf(varargin_1);
  if ((fileid > 22) || (fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    fileid = (int8_T)(fileid - 2);
    *f = pr5_DW.eml_openfiles[fileid - 1];
    *a = pr5_DW.eml_autoflush[fileid - 1];
  } else {
    switch (fileid) {
     case 0:
      *f = stdin;
      *a = true;
      break;

     case 1:
      *f = stdout;
      *a = true;
      break;

     case 2:
      *f = stderr;
      *a = true;
      break;

     default:
      *f = NULL;
      *a = true;
      break;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T pr5_cfprintf(real_T fileID, real_T varargin_1, real_T varargin_2,
  real_T varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[19] = { '%', 'f', ' ', '%', 'f', ' ', '%', 'f', ' ',
    '%', 'f', ' ', '%', 'f', ' ', '%', 'f', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  pr5_fileManager_m(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3,
                        varargin_4, varargin_5, varargin_6);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static FILE * pr5_fileManager_mqx(int8_T varargin_1)
{
  FILE * f;
  int8_T fileid;
  fileid = varargin_1;
  if ((varargin_1 > 22) || (varargin_1 < 0)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    f = pr5_DW.eml_openfiles[fileid - 3];
  } else {
    switch (fileid) {
     case 0:
      f = stdin;
      break;

     case 1:
      f = stdout;
      break;

     case 2:
      f = stderr;
      break;

     default:
      f = NULL;
      break;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T pr5_fileManager_mq(real_T varargin_1)
{
  int32_T f;
  int8_T fileid;
  FILE * filestar;
  int32_T cst;
  f = -1;
  fileid = (int8_T)rt_roundd_snf(varargin_1);
  if ((fileid > 22) || (fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  filestar = pr5_fileManager_mqx(fileid);
  if (!((filestar == NULL) || (fileid < 3))) {
    cst = fclose(filestar);
    if (cst == 0) {
      f = 0;
      fileid = (int8_T)(fileid - 2);
      pr5_DW.eml_openfiles[fileid - 1] = NULL;
      pr5_DW.eml_autoflush[fileid - 1] = true;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void pr5_fclose(real_T fileID)
{
  pr5_fileManager_mq(fileID);
}

/* Model step function */
void pr5_step(void)
{
  int32_T tmp;
  int32_T tmp_0;
  int8_T tmp_1;
  int32_T left_motor;
  int32_T right_motor;
  real_T Clock;

  /* Clock: '<Root>/Clock' */
  Clock = pr5_M->Timing.t[0];

  /* S-Function (ev3_encoder): '<Root>/Left_encoder ' */
  tmp = getEncoderValueNoReset(2U);

  /* S-Function (ev3_encoder): '<Root>/Right_encoder ' */
  tmp_0 = getEncoderValueNoReset(3U);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   *  S-Function (ev3_encoder): '<Root>/Left_encoder '
   *  S-Function (ev3_encoder): '<Root>/Right_encoder '
   */
  /* MATLAB Function 'MATLAB Function': '<S4>:1' */
  /* '<S4>:1:7' if isempty(counter) */
  if (!pr5_DW.counter_not_empty) {
    /* '<S4>:1:8' counter = 0; */
    pr5_DW.counter_not_empty = true;

    /* '<S4>:1:9' isTurning = false; */
    /* '<S4>:1:10' results = zeros(6,30000); */
    /* '<S4>:1:11' iteration = 1; */
    /* '<S4>:1:12' file = fopen('/home/root/lms2012/prjs/mw/mylog.txt','w'); */
    pr5_DW.file = pr5_fopen();
  }

  /* '<S4>:1:14' if (isTurning) */
  if (pr5_DW.isTurning) {
    /* '<S4>:1:15' left_motor = 43; */
    left_motor = 43;

    /* '<S4>:1:16' right_motor = 0; */
    right_motor = 0;
  } else {
    /* '<S4>:1:17' else */
    /* '<S4>:1:18' left_motor = 70; */
    left_motor = 70;

    /* '<S4>:1:19' right_motor = 70; */
    right_motor = 70;
  }

  /* '<S4>:1:21' results(:,iteration) = [time, encoder_left, encoder_right, 0, 0, 0]; */
  /* '<S4>:1:22' iteration = iteration + 1; */
  pr5_DW.iteration++;

  /* '<S4>:1:23' if(time - counter > 1000) */
  if (Clock - pr5_DW.counter > 1000.0) {
    /* '<S4>:1:24' isTurning = ~isTurning; */
    pr5_DW.isTurning = !pr5_DW.isTurning;

    /* '<S4>:1:25' counter = time; */
    pr5_DW.counter = Clock;
  }

  /* '<S4>:1:27' fprintf(file,'%f %f %f %f %f %f\n',double(time), double(encoder_left), double(encoder_right),0.0,0.0,0.0); */
  pr5_cfprintf(pr5_DW.file, Clock, (real_T)tmp, (real_T)tmp_0, 0.0, 0.0, 0.0);

  /* '<S4>:1:28' if (has_finished) */
  if (Clock >= pr5_P.CompareToConstant_const) {
    /* '<S4>:1:29' fclose(file); */
    pr5_fclose(pr5_DW.file);
  }

  /* S-Function (ev3_motor): '<S3>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  tmp_1 = (int8_T)left_motor;
  setMotor(&tmp_1, 2U, 2U);

  /* S-Function (ev3_motor): '<S5>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  tmp_1 = (int8_T)right_motor;
  setMotor(&tmp_1, 3U, 2U);

  /* Stop: '<Root>/Stop Simulation' incorporates:
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S2>/Compare'
   */
  if (Clock >= pr5_P.CompareToConstant1_const) {
    rtmSetStopRequested(pr5_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  pr5_M->Timing.t[0] =
    (++pr5_M->Timing.clockTick0) * pr5_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    pr5_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void pr5_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)pr5_M, 0,
                sizeof(RT_MODEL_pr5_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&pr5_M->solverInfo, &pr5_M->Timing.simTimeStep);
    rtsiSetTPtr(&pr5_M->solverInfo, &rtmGetTPtr(pr5_M));
    rtsiSetStepSizePtr(&pr5_M->solverInfo, &pr5_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&pr5_M->solverInfo, (&rtmGetErrorStatus(pr5_M)));
    rtsiSetRTModelPtr(&pr5_M->solverInfo, pr5_M);
  }

  rtsiSetSimTimeStep(&pr5_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&pr5_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(pr5_M, &pr5_M->Timing.tArray[0]);
  pr5_M->Timing.stepSize0 = 0.001;

  /* states (dwork) */
  (void) memset((void *)&pr5_DW, 0,
                sizeof(DW_pr5_T));

  {
    FILE * a;
    int32_T i;

    /* Start for S-Function (ev3_encoder): '<Root>/Left_encoder ' */
    initEncoder(2U);

    /* Start for S-Function (ev3_encoder): '<Root>/Right_encoder ' */
    initEncoder(3U);

    /* Start for S-Function (ev3_motor): '<S3>/Motor' */
    initMotor(2U);

    /* Start for S-Function (ev3_motor): '<S5>/Motor' */
    initMotor(3U);

    /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
    pr5_DW.counter_not_empty = false;
    a = NULL;
    for (i = 0; i < 20; i++) {
      pr5_DW.eml_autoflush[i] = false;
      pr5_DW.eml_openfiles[i] = a;
    }

    pr5_DW.counter = 0.0;
    pr5_DW.isTurning = false;
    pr5_DW.iteration = 1.0;

    /* End of SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  }
}

/* Model terminate function */
void pr5_terminate(void)
{
  /* Terminate for S-Function (ev3_encoder): '<Root>/Left_encoder ' */
  terminateEncoder(2U);

  /* Terminate for S-Function (ev3_encoder): '<Root>/Right_encoder ' */
  terminateEncoder(3U);

  /* Terminate for S-Function (ev3_motor): '<S3>/Motor' */
  terminateMotor(2U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S5>/Motor' */
  terminateMotor(3U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
