/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stdio.h>
#include <stdlib.h>
#include "seek_and_eat.h"
#include "seek_and_eat_private.h"
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
  runModel = (rtmGetErrorStatus(seek_and_eat_M) == (NULL));
  while (runModel) {
    sem_wait(&baserateTaskSem);
    seek_and_eat_step();

    /* Get model outputs here */
    runModel = (rtmGetErrorStatus(seek_and_eat_M) == (NULL));
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
  rtmSetErrorStatus(seek_and_eat_M, "stopping the model");
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
  seek_and_eat_terminate();
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
  rtmSetErrorStatus(seek_and_eat_M, 0);

  /* Initialize model */
  seek_and_eat_initialize();

  /* Call RTOS Initialization function */
  legoev3RTOSInit(0.1, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
