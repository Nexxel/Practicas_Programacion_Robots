/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_light.c
 *
 * Code generated for Simulink model 'control_light'.
 *
 * Model version                  : 1.66
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Apr 25 23:43:27 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_light.h"
#include "control_light_private.h"

/* Block states (auto storage) */
DW_control_light_T control_light_DW;

/* Real-time model */
RT_MODEL_control_light_T control_light_M_;
RT_MODEL_control_light_T *const control_light_M = &control_light_M_;

/* Forward declaration for local functions */
static int8_T control_light_filedata(void);
static real_T control_light_fileManager(void);
static real_T control_light_fopen(void);
static FILE * control_light_fileManager_gxv(int8_T varargin_1);
static int32_T control_light_fileManager_gx(real_T varargin_1);
static void control_light_fclose(real_T fileID);
static void control_light_fileManager_g(real_T varargin_1, FILE * *f, boolean_T *
  a);
static int32_T control_light_cfprintf(real_T fileID, real_T varargin_1, real_T
  varargin_2);

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int8_T control_light_filedata(void)
{
  int8_T f;
  int8_T k;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 21)) {
    if (control_light_DW.eml_openfiles[k - 1] == NULL) {
      f = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T control_light_fileManager(void)
{
  int8_T fileid;
  int8_T j;
  FILE * filestar;
  static const char_T b[11] = { 'o', 'u', 't', 'p', 'u', 't', '.', 't', 'x', 't',
    '\x00' };

  char_T b_0[11];
  char_T c[3];
  int32_T i;
  fileid = -1;
  j = control_light_filedata();
  if (!(j < 1)) {
    for (i = 0; i < 11; i++) {
      b_0[i] = b[i];
    }

    c[0] = 'w';
    c[1] = 'b';
    c[2] = '\x00';
    filestar = fopen(b_0, c);
    if (filestar != NULL) {
      control_light_DW.eml_openfiles[j - 1] = filestar;
      control_light_DW.eml_autoflush[j - 1] = true;
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
static real_T control_light_fopen(void)
{
  return control_light_fileManager();
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
static FILE * control_light_fileManager_gxv(int8_T varargin_1)
{
  FILE * f;
  int8_T fileid;
  fileid = varargin_1;
  if ((varargin_1 > 22) || (varargin_1 < 0)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    f = control_light_DW.eml_openfiles[fileid - 3];
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
static int32_T control_light_fileManager_gx(real_T varargin_1)
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

  filestar = control_light_fileManager_gxv(fileid);
  if (!((filestar == NULL) || (fileid < 3))) {
    cst = fclose(filestar);
    if (cst == 0) {
      f = 0;
      fileid = (int8_T)(fileid - 2);
      control_light_DW.eml_openfiles[fileid - 1] = NULL;
      control_light_DW.eml_autoflush[fileid - 1] = true;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void control_light_fclose(real_T fileID)
{
  control_light_fileManager_gx(fileID);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void control_light_fileManager_g(real_T varargin_1, FILE * *f, boolean_T *
  a)
{
  int8_T fileid;
  fileid = (int8_T)rt_roundd_snf(varargin_1);
  if ((fileid > 22) || (fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    fileid = (int8_T)(fileid - 2);
    *f = control_light_DW.eml_openfiles[fileid - 1];
    *a = control_light_DW.eml_autoflush[fileid - 1];
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
static int32_T control_light_cfprintf(real_T fileID, real_T varargin_1, real_T
  varargin_2)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { '%', 'f', ' ', '	', ' ', '%', 'f', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  control_light_fileManager_g(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

/* Model step function */
void control_light_step(void)
{
  uint8_T tmp;
  int8_T tmp_0;
  int32_T left_motor;
  int32_T right_motor;
  int32_T ended;
  real_T Clock;

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  tmp = getColorSensorValue(1U, 2U);

  /* S-Function (ev3_lcd): '<S1>/LCD' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  lcdDisplay(tmp, control_light_ConstP.LCD_p1, 2U, 1U);

  /* Clock: '<Root>/Clock' */
  Clock = control_light_M->Timing.t[0];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  /* '<S2>:1:5' if isempty(times) */
  /* '<S2>:1:10' if(current_time < 5) */
  if (Clock < 5.0) {
    /* '<S2>:1:11' times(counter,1) = current_time; */
    control_light_DW.times[(int32_T)control_light_DW.counter - 1] = Clock;

    /* '<S2>:1:11' intensities(counter,1) = color_intensity; */
    control_light_DW.intensities[(int32_T)control_light_DW.counter - 1] = tmp;

    /* '<S2>:1:12' ended = 0; */
    ended = 0;

    /* '<S2>:1:13' R = 55; */
    /* '<S2>:1:14' U = 5; */
    /* '<S2>:1:15' P = 20; */
    /* '<S2>:1:16' if color_intensity < R - U */
    if (tmp < 50) {
      /* '<S2>:1:17' left_motor = -P; */
      left_motor = -20;

      /* '<S2>:1:18' right_motor = P; */
      right_motor = 20;
    } else if (tmp > 60) {
      /* '<S2>:1:19' elseif color_intensity > R + U */
      /* '<S2>:1:20' left_motor = P; */
      left_motor = 20;

      /* '<S2>:1:21' right_motor = -P; */
      right_motor = -20;
    } else {
      /* '<S2>:1:22' else */
      /* '<S2>:1:23' left_motor = P; */
      left_motor = 20;

      /* '<S2>:1:24' right_motor = P; */
      right_motor = 20;
    }

    /* '<S2>:1:26' counter = counter + 1; */
    control_light_DW.counter++;

    /* '<S2>:1:27' pause(10); */
  } else if (Clock == 5.0) {
    /* '<S2>:1:28' elseif(current_time == 5) */
    /* '<S2>:1:29' times(counter,1) = current_time; */
    control_light_DW.times[(int32_T)control_light_DW.counter - 1] = 5.0;

    /* '<S2>:1:29' intensities(counter,1) = color_intensity; */
    control_light_DW.intensities[(int32_T)control_light_DW.counter - 1] = tmp;

    /* '<S2>:1:30' left_motor = 0; */
    left_motor = 0;

    /* '<S2>:1:31' right_motor = 0; */
    right_motor = 0;

    /* '<S2>:1:32' file = fopen('output.txt','w'); */
    Clock = control_light_fopen();

    /* '<S2>:1:33' for i = 1:size(times,1) */
    for (ended = 0; ended < 5000; ended++) {
      /* '<S2>:1:34' fprintf(file, '%f \t %f', times(i,1), intensities(i,1)); */
      control_light_cfprintf(Clock, control_light_DW.times[ended],
        control_light_DW.intensities[ended]);
    }

    /* '<S2>:1:36' fclose(file); */
    control_light_fclose(Clock);

    /* '<S2>:1:37' ended = 1; */
    ended = 1;
  } else {
    /* '<S2>:1:38' else */
    /* '<S2>:1:39' left_motor = 0; */
    left_motor = 0;

    /* '<S2>:1:40' right_motor = 0; */
    right_motor = 0;

    /* '<S2>:1:41' ended = 0; */
    ended = 0;
  }

  /* S-Function (ev3_motor): '<S3>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  tmp_0 = (int8_T)left_motor;
  setMotor(&tmp_0, 2U, 2U);

  /* S-Function (ev3_motor): '<S4>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  tmp_0 = (int8_T)right_motor;
  setMotor(&tmp_0, 3U, 2U);

  /* Stop: '<Root>/Stop Simulation' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  if (ended != 0) {
    rtmSetStopRequested(control_light_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */

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

  /* states (dwork) */
  (void) memset((void *)&control_light_DW, 0,
                sizeof(DW_control_light_T));

  {
    FILE * a;
    int32_T i;

    /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
    initColorSensor(1U, 2U);

    /* Start for S-Function (ev3_lcd): '<S1>/LCD' */
    initLCD();

    /* Start for S-Function (ev3_motor): '<S3>/Motor' */
    initMotor(2U);

    /* Start for S-Function (ev3_motor): '<S4>/Motor' */
    initMotor(3U);

    /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
    a = NULL;
    for (i = 0; i < 20; i++) {
      control_light_DW.eml_autoflush[i] = false;
      control_light_DW.eml_openfiles[i] = a;
    }

    /* '<S2>:1:6' counter = 1; */
    control_light_DW.counter = 1.0;

    /* '<S2>:1:7' times = zeros(5000,1); */
    /* '<S2>:1:8' intensities = zeros(5000,1); */
    memset(&control_light_DW.times[0], 0, 5000U * sizeof(real_T));
    memset(&control_light_DW.intensities[0], 0, 5000U * sizeof(real_T));

    /* End of SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  }
}

/* Model terminate function */
void control_light_terminate(void)
{
  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(1U);

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
