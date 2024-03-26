/**
 ******************************************************************************
 * @file        : timeline.h
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

#ifndef APPLICATION_TIMELINE_H_
#define APPLICATION_TIMELINE_H_

extern osThreadId_t tid_thr_app_main;

void timeline_task_thread();
#endif  // APPLICATION_TIMELINE_H_
