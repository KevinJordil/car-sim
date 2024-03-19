/**
 ******************************************************************************
 * @file        : timeline.c
 * @brief       : timeline module for the application
 * @author      : Kevin Jordil
 * @date        : 5. March 2024
 ******************************************************************************
 * @copyright   : Copyright (c) 2024 HES-SO / ISC
 * @attention   : SPDX-License-Identifier: MIT OR Apache-2.0
 ******************************************************************************
 * @details
 * This module is responsible for the timeline of the application
 ******************************************************************************
 */

/* Although normally "The Standard Library input/output functions shall not be
   used" (Rule 21.6), in this case we make use of it as temporary solution. */
// cppcheck-suppress misra-c2012-21.6
#include "timeline.h"

#include <stdint.h>
#include <stdio.h>

#include "cmsis_os2.h"
#include "faults.h"
#include "tasks.h"

// code part of the "timeline_task_thread()" function
void timeline_task_thread() {
    uint32_t c1                 = 150;
    uint32_t t1                 = 250U;
    osTimerId_t periodic_task_1 = osTimerNew(task1, osTimerPeriodic, (void*)&c1, NULL);
    if (periodic_task_1 == NULL) {
        app_error_handler(CANNOT_CREATE_TIMER);
    }

    uint32_t c2                 = 100;
    uint32_t t2                 = 500U;
    osTimerId_t periodic_task_2 = osTimerNew(task2, osTimerPeriodic, (void*)&c2, NULL);
    if (periodic_task_2 == NULL) {
        app_error_handler(CANNOT_CREATE_TIMER);
    }

    uint32_t c3                 = 50;
    uint32_t t3                 = 1000U;
    osTimerId_t periodic_task_3 = osTimerNew(task3, osTimerPeriodic, (void*)&c3, NULL);
    if (periodic_task_3 == NULL) {
        app_error_handler(CANNOT_CREATE_TIMER);
    }

    uint32_t minor_cycle = 250;
    osTimerStart(periodic_task_1, t1);
    osDelay(minor_cycle);
    osTimerStart(periodic_task_2, t2);
    osDelay(minor_cycle);
    osTimerStart(periodic_task_3, t3);

    // Suspend tid_thr_app_main
    osThreadSuspend(tid_thr_app_main);
}
