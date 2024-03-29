/**
 ******************************************************************************
 * @file        : tasks.c
 * @brief       : Task module for the application
 * @author      : Kevin Jordil
 * @date        : 5. March 2024
 ******************************************************************************
 * @copyright   : Copyright (c) 2024 HES-SO / ISC
 * @attention   : SPDX-License-Identifier: MIT OR Apache-2.0
 ******************************************************************************
 * @details
 * This module is responsible for the tasks of the application
 ******************************************************************************
 */

/* Although normally "The Standard Library input/output functions shall not be
   used" (Rule 21.6), in this case we make use of it as temporary solution. */
// cppcheck-suppress misra-c2012-21.6
#include "Application/tasks.h"

#include <stdint.h>
#include <stdio.h>

#include "Application/helpers.h"

void task1(void* arg) {
    uint32_t computation_time =
        *((uint32_t*)arg);  // NOLINTNEXTLINE(readability/casting)
    busy_wait_ms(computation_time);
}

void task2(void* arg) {
    uint32_t computation_time =
        *((uint32_t*)arg);  // NOLINTNEXTLINE(readability/casting)
    busy_wait_ms(computation_time);
}

void task3(void* arg) {
    uint32_t computation_time =
        *((uint32_t*)arg);  // NOLINTNEXTLINE(readability/casting)
    busy_wait_ms(computation_time);
}
