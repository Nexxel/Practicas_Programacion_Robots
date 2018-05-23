/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pr5.c
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
  real_T varargin_3);
static FILE * pr5_fileManager_mqx(int8_T varargin_1);
static int32_T pr5_fileManager_mq(real_T varargin_1);
static void pr5_fclose(real_T fileID);
static int8_T pr5_filedata_n(void);
static real_T pr5_fileManager_i(void);
static real_T pr5_fopen_j(void);
static void pr5_fileManager_iy(real_T varargin_1, FILE * *f, boolean_T *a);
static int32_T pr5_cfprintf_f(real_T fileID, real_T varargin_1, real_T
  varargin_2, real_T varargin_3);
static FILE * pr5_fileManager_iyoj(int8_T varargin_1);
static int32_T pr5_fileManager_iyo(real_T varargin_1);
static void pr5_fclose_b(real_T fileID);

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
      pr5_B.b_m[i] = b[i];
    }

    c[0] = 'w';
    c[1] = 'b';
    c[2] = '\x00';
    filestar = fopen(pr5_B.b_m, c);
    if (filestar != NULL) {
      pr5_DW.eml_openfiles[j - 1] = filestar;
      pr5_DW.eml_autoflush_a[j - 1] = true;
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
    *a = pr5_DW.eml_autoflush_a[fileid - 1];
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
  real_T varargin_3)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '%', 'f', ' ', '%', 'f', ' ', '%', 'f',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  pr5_fileManager_m(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
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
      pr5_DW.eml_autoflush_a[fileid - 1] = true;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void pr5_fclose(real_T fileID)
{
  pr5_fileManager_mq(fileID);
}

/* Function for MATLAB Function: '<Root>/odometer' */
static int8_T pr5_filedata_n(void)
{
  int8_T f;
  int8_T k;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 21)) {
    if (pr5_DW.eml_openfiles_a[k - 1] == NULL) {
      f = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/odometer' */
static real_T pr5_fileManager_i(void)
{
  int8_T fileid;
  int8_T j;
  FILE * filestar;
  static const char_T b[38] = { '/', 'h', 'o', 'm', 'e', '/', 'r', 'o', 'o', 't',
    '/', 'l', 'm', 's', '2', '0', '1', '2', '/', 'p', 'r', 'j', 's', '/', 'm',
    'w', '/', 'm', 'y', 'p', 'o', 's', 'e', '.', 't', 'x', 't', '\x00' };

  char_T c[3];
  int32_T i;
  fileid = -1;
  j = pr5_filedata_n();
  if (!(j < 1)) {
    for (i = 0; i < 38; i++) {
      pr5_B.b[i] = b[i];
    }

    c[0] = 'w';
    c[1] = 'b';
    c[2] = '\x00';
    filestar = fopen(pr5_B.b, c);
    if (filestar != NULL) {
      pr5_DW.eml_openfiles_a[j - 1] = filestar;
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

/* Function for MATLAB Function: '<Root>/odometer' */
static real_T pr5_fopen_j(void)
{
  return pr5_fileManager_i();
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = u0 / u1;
      if (fabs(u1_0 - rt_roundd_snf(u1_0)) <= DBL_EPSILON * fabs(u1_0)) {
        y = 0.0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/odometer' */
static void pr5_fileManager_iy(real_T varargin_1, FILE * *f, boolean_T *a)
{
  int8_T fileid;
  fileid = (int8_T)rt_roundd_snf(varargin_1);
  if ((fileid > 22) || (fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    fileid = (int8_T)(fileid - 2);
    *f = pr5_DW.eml_openfiles_a[fileid - 1];
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

/* Function for MATLAB Function: '<Root>/odometer' */
static int32_T pr5_cfprintf_f(real_T fileID, real_T varargin_1, real_T
  varargin_2, real_T varargin_3)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '%', 'f', ' ', '%', 'f', ' ', '%', 'f',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  pr5_fileManager_iy(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

/* Function for MATLAB Function: '<Root>/odometer' */
static FILE * pr5_fileManager_iyoj(int8_T varargin_1)
{
  FILE * f;
  int8_T fileid;
  fileid = varargin_1;
  if ((varargin_1 > 22) || (varargin_1 < 0)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    f = pr5_DW.eml_openfiles_a[fileid - 3];
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

/* Function for MATLAB Function: '<Root>/odometer' */
static int32_T pr5_fileManager_iyo(real_T varargin_1)
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

  filestar = pr5_fileManager_iyoj(fileid);
  if (!((filestar == NULL) || (fileid < 3))) {
    cst = fclose(filestar);
    if (cst == 0) {
      f = 0;
      fileid = (int8_T)(fileid - 2);
      pr5_DW.eml_openfiles_a[fileid - 1] = NULL;
      pr5_DW.eml_autoflush[fileid - 1] = true;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/odometer' */
static void pr5_fclose_b(real_T fileID)
{
  pr5_fileManager_iyo(fileID);
}

/* Model step function */
void pr5_step(void)
{
  int32_T tmp;
  int32_T tmp_0;
  int32_T left_motor;
  int32_T right_motor;
  real_T x1;
  int8_T n;
  real_T absx;
  real_T b_absx;
  real_T Clock;
  boolean_T Compare;

  /* Clock: '<Root>/Clock' */
  Clock = pr5_M->Timing.t[0];

  /* S-Function (ev3_encoder): '<Root>/Left_encoder ' */
  tmp = getEncoderValueNoReset(2U);

  /* S-Function (ev3_encoder): '<Root>/Right_encoder ' */
  tmp_0 = getEncoderValueNoReset(3U);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  Compare = (Clock >= pr5_P.CompareToConstant_const);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
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
    pr5_DW.file_g = pr5_fopen();
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

  /* '<S4>:1:23' if(time - counter > 1) */
  if (Clock - pr5_DW.counter > 1.0) {
    /* '<S4>:1:24' isTurning = ~isTurning; */
    pr5_DW.isTurning = !pr5_DW.isTurning;

    /* '<S4>:1:25' counter = time; */
    pr5_DW.counter = Clock;
  }

  /* '<S4>:1:27' fprintf(file,'%f %f %f\n',double(time), double(encoder_left), double(encoder_right)); */
  pr5_cfprintf(pr5_DW.file_g, Clock, (real_T)tmp, (real_T)tmp_0);

  /* '<S4>:1:28' if (has_finished) */
  if (Compare) {
    /* '<S4>:1:29' fclose(file); */
    pr5_fclose(pr5_DW.file_g);
  }

  /* S-Function (ev3_motor): '<S3>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  n = (int8_T)left_motor;
  setMotor(&n, 2U, 2U);

  /* S-Function (ev3_motor): '<S5>/Motor' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  n = (int8_T)right_motor;
  setMotor(&n, 3U, 2U);

  /* Stop: '<Root>/Stop Simulation' incorporates:
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S2>/Compare'
   */
  if (Clock >= pr5_P.CompareToConstant1_const) {
    rtmSetStopRequested(pr5_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */

  /* MATLAB Function: '<Root>/odometer' incorporates:
   *  S-Function (ev3_encoder): '<Root>/Left_encoder '
   *  S-Function (ev3_encoder): '<Root>/Right_encoder '
   */
  /* MATLAB Function 'odometer': '<S6>:1' */
  /* '<S6>:1:3' time  = double(t); */
  /* '<S6>:1:4' enc_l = double(encl); */
  /* '<S6>:1:5' enc_r = double(encr); */
  /*  define constants */
  /* '<S6>:1:9' if( isempty(D) ) */
  /*  define previous state  */
  /* '<S6>:1:16' if( isempty(x0) ) */
  if (!pr5_DW.x0_not_empty) {
    /* '<S6>:1:17' file = fopen('/home/root/lms2012/prjs/mw/mypose.txt','w'); */
    pr5_DW.file = pr5_fopen_j();

    /* '<S6>:1:18' x0 = 0; */
    pr5_DW.x0_not_empty = true;

    /* '<S6>:1:19' y0 = 0; */
    /* '<S6>:1:20' w0 = 0; */
    /* '<S6>:1:21' t0 = time; */
    pr5_DW.t0 = Clock;

    /* '<S6>:1:22' prev_enc_l = enc_l; */
    pr5_DW.prev_enc_l = tmp;

    /* '<S6>:1:23' prev_enc_r = enc_r; */
    pr5_DW.prev_enc_r = tmp_0;
  }

  /* '<S6>:1:25' delta_encl = enc_l - prev_enc_l; */
  pr5_B.delta_encl = (real_T)tmp - pr5_DW.prev_enc_l;

  /* '<S6>:1:26' delta_encr = enc_r - prev_enc_r; */
  pr5_B.delta_encr = (real_T)tmp_0 - pr5_DW.prev_enc_r;

  /* '<S6>:1:27' if(time == t0) */
  if (Clock == pr5_DW.t0) {
    /* '<S6>:1:28' x1 = 0; */
    x1 = 0.0;

    /* '<S6>:1:29' y1 = 0; */
    absx = 0.0;

    /* '<S6>:1:30' w1 = 0; */
    pr5_B.delta_encl = 0.0;
  } else {
    /* '<S6>:1:31' else */
    /* '<S6>:1:32' x1 = ((delta_encl * R + delta_encr * R) / 2) * cosd(w0); */
    if (!((!rtIsInf(pr5_DW.w0)) && (!rtIsNaN(pr5_DW.w0)))) {
      x1 = (rtNaN);
    } else {
      x1 = rt_remd_snf(pr5_DW.w0, 360.0);
      absx = fabs(x1);
      if (absx > 180.0) {
        if (x1 > 0.0) {
          x1 -= 360.0;
        } else {
          x1 += 360.0;
        }

        absx = fabs(x1);
      }

      if (absx <= 45.0) {
        x1 *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (x1 > 0.0) {
          x1 = (x1 - 90.0) * 0.017453292519943295;
          n = 1;
        } else {
          x1 = (x1 + 90.0) * 0.017453292519943295;
          n = -1;
        }
      } else if (x1 > 0.0) {
        x1 = (x1 - 180.0) * 0.017453292519943295;
        n = 2;
      } else {
        x1 = (x1 + 180.0) * 0.017453292519943295;
        n = -2;
      }

      switch (n) {
       case 0:
        x1 = cos(x1);
        break;

       case 1:
        x1 = -sin(x1);
        break;

       case -1:
        x1 = sin(x1);
        break;

       default:
        x1 = -cos(x1);
        break;
      }
    }

    x1 *= (pr5_B.delta_encl * pr5_DW.R + pr5_B.delta_encr * pr5_DW.R) / 2.0;

    /* '<S6>:1:33' y1 = ((delta_encl * R + delta_encr * R) / 2) * sind(w0); */
    if (!((!rtIsInf(pr5_DW.w0)) && (!rtIsNaN(pr5_DW.w0)))) {
      absx = (rtNaN);
    } else {
      absx = rt_remd_snf(pr5_DW.w0, 360.0);
      b_absx = fabs(absx);
      if (b_absx > 180.0) {
        if (absx > 0.0) {
          absx -= 360.0;
        } else {
          absx += 360.0;
        }

        b_absx = fabs(absx);
      }

      if (b_absx <= 45.0) {
        absx *= 0.017453292519943295;
        n = 0;
      } else if (b_absx <= 135.0) {
        if (absx > 0.0) {
          absx = (absx - 90.0) * 0.017453292519943295;
          n = 1;
        } else {
          absx = (absx + 90.0) * 0.017453292519943295;
          n = -1;
        }
      } else if (absx > 0.0) {
        absx = (absx - 180.0) * 0.017453292519943295;
        n = 2;
      } else {
        absx = (absx + 180.0) * 0.017453292519943295;
        n = -2;
      }

      switch (n) {
       case 0:
        absx = sin(absx);
        break;

       case 1:
        absx = cos(absx);
        break;

       case -1:
        absx = -cos(absx);
        break;

       default:
        absx = -sin(absx);
        break;
      }
    }

    absx *= (pr5_B.delta_encl * pr5_DW.R + pr5_B.delta_encr * pr5_DW.R) / 2.0;

    /* '<S6>:1:34' w1 = ((delta_encr * R - delta_encl * R) / D); */
    pr5_B.delta_encl = (pr5_B.delta_encr * pr5_DW.R - pr5_B.delta_encl *
                        pr5_DW.R) / pr5_DW.D;
  }

  /* '<S6>:1:36' x0 = x0 + x1; */
  pr5_DW.x0 += x1;

  /* '<S6>:1:37' y0 = y0 + y1; */
  pr5_DW.y0 += absx;

  /* '<S6>:1:38' w0 = w0 + w1; */
  pr5_DW.w0 += pr5_B.delta_encl;

  /* '<S6>:1:39' t0 = time; */
  pr5_DW.t0 = Clock;

  /* '<S6>:1:40' prev_enc_l = enc_l; */
  pr5_DW.prev_enc_l = tmp;

  /* '<S6>:1:41' prev_enc_r = enc_r; */
  pr5_DW.prev_enc_r = tmp_0;

  /* '<S6>:1:42' fprintf(file,'%f %f %f\n',double(x0), double(y0), double(w0)); */
  pr5_cfprintf_f(pr5_DW.file, pr5_DW.x0, pr5_DW.y0, pr5_DW.w0);

  /* '<S6>:1:43' if (has_finished) */
  if (Compare) {
    /* '<S6>:1:44' fclose(file); */
    pr5_fclose_b(pr5_DW.file);
  }

  /* End of MATLAB Function: '<Root>/odometer' */

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

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

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
    pr5_DW.counter = 0.0;
    pr5_DW.isTurning = false;
    pr5_DW.iteration = 1.0;

    /* SystemInitialize for MATLAB Function: '<Root>/odometer' */
    pr5_DW.x0_not_empty = false;
    for (i = 0; i < 20; i++) {
      /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
      pr5_DW.eml_autoflush_a[i] = false;
      pr5_DW.eml_openfiles[i] = a;

      /* SystemInitialize for MATLAB Function: '<Root>/odometer' */
      pr5_DW.eml_autoflush[i] = false;
    }

    /* SystemInitialize for MATLAB Function: '<Root>/odometer' */
    a = NULL;
    for (i = 0; i < 20; i++) {
      pr5_DW.eml_openfiles_a[i] = a;
    }

    /* '<S6>:1:10' D = 0.117; */
    pr5_DW.D = 0.117;

    /* '<S6>:1:11' R = 0.027; */
    pr5_DW.R = 0.027;
    pr5_DW.x0 = 0.0;
    pr5_DW.y0 = 0.0;
    pr5_DW.w0 = 0.0;
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
