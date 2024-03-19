/**
 ******************************************************************************
 * @file        : faults.c
 * @brief       : error helper module
 * @author      : Kevin Jordil
 * @date        : 19. March 2023
 ******************************************************************************
 * @copyright   : Copyright (c) 2023 HEIA-FR / ISC
 *                Haute école d'ingénierie et d'architecture de Fribourg
 *                Informatique et Systèmes de Communication
 * @attention   : SPDX-License-Identifier: MIT OR Apache-2.0
 ******************************************************************************
 * @details
 * Helper module for errors
 ******************************************************************************
 */

/* Although normally "The Standard Library input/output functions shall not be
   used" (Rule 21.6), in this case we make use of it as temporary solution. */
// cppcheck-suppress misra-c2012-21.6

#ifndef APPLICATION_FAULTS_H_
#define APPLICATION_FAULTS_H_

#include <stdio.h>

#include "EventRecorder.h"

#define CANNOT_CREATE_TIMER 0x01U

static void error_handler(void);
void startup_error_handler(void);
void app_error_handler(uint32_t errNo);

#endif  // APPLICATION_FAULTS_H_
