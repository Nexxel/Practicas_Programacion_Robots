/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stdio.h>
#include <stdlib.h>
#include "pr5.h"
#include "pr5_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "driver_ev3.h"
#include "ev3_constants.h"
#include "ev3_include.h"
#include "lms2012.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(pr5_M) == (NULL)) && !rtmGetStopRequested(pr5_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);
    pr5_step();

    /* Get model outputs here */
    runModel = (rtmGetErrorStatus(pr5_M) == (NULL)) && !rtmGetStopRequested
      (pr5_M);
    runModel = runModel && !getBackButtonValue();
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(pr5_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;
  printf("**terminating the model**\n");
  fflush(stdout);

  {
    runModel = 0;
  }

  MW_legoev3_terminatetasks();

  /* Disable rt_OneStep() here */

  /* Terminate model */
  pr5_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  MW_ev3_init();
  printf("**starting the model**\n");
  fflush(stdout);
  rtmSetErrorStatus(pr5_M, 0);

  /* Initialize model */
  pr5_initialize();

  /* Call RTOS Initialization function */
  legoev3RTOSInit(0.001, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
