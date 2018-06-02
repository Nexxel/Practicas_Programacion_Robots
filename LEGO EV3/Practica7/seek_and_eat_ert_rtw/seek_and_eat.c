/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: seek_and_eat.c
 *
 * Code generated for Simulink model 'seek_and_eat'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 30 14:02:54 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "seek_and_eat.h"
#include "seek_and_eat_private.h"

/* Block states (auto storage) */
DW_seek_and_eat_T seek_and_eat_DW;

/* Real-time model */
RT_MODEL_seek_and_eat_T seek_and_eat_M_;
RT_MODEL_seek_and_eat_T *const seek_and_eat_M = &seek_and_eat_M_;

/* Forward declaration for local functions */
static void seek_and_e_twister_state_vector(uint32_T mt[625], uint32_T seed);
static real_T seek_and_eat_eml_rand_mt19937ar(uint32_T state[625]);
static real_T seek_and_eat_rand(void);

/* Function for MATLAB Function: '<Root>/Collision Avoidance' */
static void seek_and_e_twister_state_vector(uint32_T mt[625], uint32_T seed)
{
  uint32_T r;
  int32_T mti;
  r = seed;
  mt[0] = seed;
  for (mti = 0; mti < 623; mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + mti) + 1U;
    mt[mti + 1] = r;
  }

  mt[624] = 624U;
}

/* Function for MATLAB Function: '<Root>/Collision Avoidance' */
static real_T seek_and_eat_eml_rand_mt19937ar(uint32_T state[625])
{
  real_T r;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  int32_T kk;
  int32_T k;
  boolean_T b_isvalid;
  int32_T exitg1;
  boolean_T exitg2;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (state[1 + kk] & 2147483647U) | (state[kk] & 2147483648U);
          if ((int32_T)(y & 1U) == 0) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[kk] = state[397 + kk] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (state[kk + 227] & 2147483648U) | (state[228 + kk] & 2147483647U);
          if ((int32_T)(y & 1U) == 0) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[kk + 227] = state[kk] ^ y;
        }

        y = (state[623] & 2147483648U) | (state[0] & 2147483647U);
        if ((int32_T)(y & 1U) == 0) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        state[623] = state[396] ^ y;
        mti = 1U;
      }

      y = state[(int32_T)mti - 1];
      state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[k] = y;
    }

    r = ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)(u[1] >> 6U)) *
      1.1102230246251565E-16;
    if (r == 0.0) {
      if ((state[624] >= 1U) && (state[624] < 625U)) {
        b_isvalid = true;
      } else {
        b_isvalid = false;
      }

      if (b_isvalid) {
        b_isvalid = false;
        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k < 625)) {
          if (state[k - 1] == 0U) {
            k++;
          } else {
            b_isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!b_isvalid) {
        seek_and_e_twister_state_vector(state, 5489U);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

/* Function for MATLAB Function: '<Root>/Collision Avoidance' */
static real_T seek_and_eat_rand(void)
{
  real_T r;
  int32_T hi;
  uint32_T test1;
  uint32_T test2;
  switch (seek_and_eat_DW.method) {
   case 4U:
    hi = (int32_T)(seek_and_eat_DW.state / 127773U);
    test1 = (seek_and_eat_DW.state - hi * 127773U) * 16807U;
    test2 = 2836U * hi;
    if (test1 < test2) {
      test1 = (test1 - test2) + 2147483647U;
    } else {
      test1 -= test2;
    }

    seek_and_eat_DW.state = test1;
    r = (real_T)test1 * 4.6566128752457969E-10;
    break;

   case 5U:
    test1 = 69069U * seek_and_eat_DW.state_o[0] + 1234567U;
    test2 = seek_and_eat_DW.state_o[1] << 13 ^ seek_and_eat_DW.state_o[1];
    test2 ^= test2 >> 17;
    test2 ^= test2 << 5;
    seek_and_eat_DW.state_o[0] = test1;
    seek_and_eat_DW.state_o[1] = test2;
    r = (real_T)(test1 + test2) * 2.328306436538696E-10;
    break;

   default:
    if (!seek_and_eat_DW.state_not_empty) {
      memset(&seek_and_eat_DW.state_e[0], 0, 625U * sizeof(uint32_T));
      seek_and_e_twister_state_vector(seek_and_eat_DW.state_e, 5489U);
      seek_and_eat_DW.state_not_empty = true;
    }

    r = seek_and_eat_eml_rand_mt19937ar(seek_and_eat_DW.state_e);
    break;
  }

  return r;
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

/* Model step function */
void seek_and_eat_step(void)
{
  uint8_T rtb_ColorSensor_0;
  uint8_T rtb_Button_0;
  int8_T tmp;
  real_T x;
  real_T b_x;

  /* S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  rtb_ColorSensor_0 = getUltrasonicSensorValue(4U);

  /* MATLAB Function: '<Root>/Collision Avoidance' incorporates:
   *  S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor'
   */
  /* MATLAB Function 'Collision Avoidance': '<S1>:1' */
  /* '<S1>:1:2' if(sonar_read < 40 ) */
  if (rtb_ColorSensor_0 < 40) {
    /* '<S1>:1:3' motor_right = -50; */
    x = -50.0;

    /* '<S1>:1:4' motor_left = 50; */
    b_x = 50.0;
  } else {
    /* '<S1>:1:5' else */
    /* '<S1>:1:7' motor_right = round(100*rand); */
    x = 100.0 * seek_and_eat_rand();
    x = rt_roundd_snf(x);

    /* '<S1>:1:8' motor_left = round(100*rand); */
    b_x = 100.0 * seek_and_eat_rand();
    b_x = rt_roundd_snf(b_x);
  }

  /* S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  rtb_ColorSensor_0 = getColorSensorValue(1U, 2U);

  /* S-Function (ev3_buttons): '<Root>/Button' */
  rtb_Button_0 = getButtonValue(2U);

  /* MATLAB Function: '<Root>/Eat ' incorporates:
   *  S-Function (ev3_buttons): '<Root>/Button'
   *  S-Function (ev3_color_sensor): '<Root>/Color Sensor'
   */
  /* MATLAB Function 'Eat ': '<S3>:1' */
  /* '<S3>:1:3' if isempty(eating_per) */
  /* '<S3>:1:6' if (button_pressed == 1 && eating_per == 0) */
  if ((rtb_Button_0 == 1) && (seek_and_eat_DW.eating_per == 0.0)) {
    /* '<S3>:1:7' eating_per = 1; */
    seek_and_eat_DW.eating_per = 1.0;
  } else {
    if (rtb_ColorSensor_0 > 60) {
      /* '<S3>:1:8' elseif(rgb_read > 60) */
      /* '<S3>:1:9' eating_per = 0; */
      seek_and_eat_DW.eating_per = 0.0;
    }
  }

  /* Product: '<Root>/Product' incorporates:
   *  MATLAB Function: '<Root>/Collision Avoidance'
   *  MATLAB Function: '<Root>/Eat '
   */
  /* '<S3>:1:11' eating = eating_per; */
  x *= seek_and_eat_DW.eating_per;

  /* Saturate: '<Root>/Saturation' */
  if (x > seek_and_eat_P.Saturation_UpperSat) {
    x = seek_and_eat_P.Saturation_UpperSat;
  } else {
    if (x < seek_and_eat_P.Saturation_LowerSat) {
      x = seek_and_eat_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  x = floor(x);
  if (x < 128.0) {
    if (x >= -128.0) {
      /* S-Function (ev3_motor): '<S2>/Motor' */
      tmp = (int8_T)x;
    } else {
      /* S-Function (ev3_motor): '<S2>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S2>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S2>/Motor' */
  setMotor(&tmp, 4U, 2U);

  /* Product: '<Root>/Product1' incorporates:
   *  MATLAB Function: '<Root>/Collision Avoidance'
   *  MATLAB Function: '<Root>/Eat '
   */
  x = b_x * seek_and_eat_DW.eating_per;

  /* Saturate: '<Root>/Saturation1' */
  if (x > seek_and_eat_P.Saturation1_UpperSat) {
    x = seek_and_eat_P.Saturation1_UpperSat;
  } else {
    if (x < seek_and_eat_P.Saturation1_LowerSat) {
      x = seek_and_eat_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  x = floor(x);
  if (x < 128.0) {
    if (x >= -128.0) {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp = (int8_T)x;
    } else {
      /* S-Function (ev3_motor): '<S4>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S4>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S4>/Motor' */
  setMotor(&tmp, 1U, 2U);
}

/* Model initialize function */
void seek_and_eat_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(seek_and_eat_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&seek_and_eat_DW, 0,
                sizeof(DW_seek_and_eat_T));

  /* Start for S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  initUltrasonicSensor(4U);

  /* Start for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  initColorSensor(1U, 2U);

  /* Start for S-Function (ev3_buttons): '<Root>/Button' */
  initButton(2U);

  /* Start for S-Function (ev3_motor): '<S2>/Motor' */
  initMotor(4U);

  /* Start for S-Function (ev3_motor): '<S4>/Motor' */
  initMotor(1U);

  /* SystemInitialize for MATLAB Function: '<Root>/Collision Avoidance' */
  seek_and_eat_DW.state_not_empty = false;
  seek_and_eat_DW.method = 7U;
  seek_and_eat_DW.state = 1144108930U;
  seek_and_eat_DW.state_o[0] = 362436069U;
  seek_and_eat_DW.state_o[1] = 521288629U;

  /* SystemInitialize for MATLAB Function: '<Root>/Eat ' */
  /* '<S3>:1:4' eating_per = 1; */
  seek_and_eat_DW.eating_per = 1.0;
}

/* Model terminate function */
void seek_and_eat_terminate(void)
{
  /* Terminate for S-Function (ev3_ultrasonic_sensor): '<Root>/Ultrasonic Sensor' */
  terminateUltrasonicSensor(4U);

  /* Terminate for S-Function (ev3_color_sensor): '<Root>/Color Sensor' */
  terminateColorSensor(1U);

  /* Terminate for S-Function (ev3_buttons): '<Root>/Button' */
  terminateButton(2U);

  /* Terminate for S-Function (ev3_motor): '<S2>/Motor' */
  terminateMotor(4U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S4>/Motor' */
  terminateMotor(1U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
