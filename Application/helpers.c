/**
 ******************************************************************************
 * @file        : helpers.c
 * @brief       : helper module for the application
 * @author      : Kevin Jordil
 * @date        : 5. March 2024
 ******************************************************************************
 * @copyright   : Copyright (c) 2024 HES-SO / ISC
 * @attention   : SPDX-License-Identifier: MIT OR Apache-2.0
 ******************************************************************************
 * @details
 * This module is responsible for the helpers of the application
 ******************************************************************************
 */

/* Although normally "The Standard Library input/output functions shall not be
   used" (Rule 21.6), in this case we make use of it as temporary solution. */
// cppcheck-suppress misra-c2012-21.6
#include <stdio.h>
#include <stdint.h>

#include "helpers.h"

void busy_wait_ms(uint32_t ms)
{
#ifdef ENABLE_DEBUG
    static const uint64_t NbrOfIterationsFor1Ms = 10852;
#else
    static const uint64_t NbrOfIterationsFor1Ms = 11340;
#endif

    const uint64_t NbrOfIterations = (uint64_t)(ms * NbrOfIterationsFor1Ms);
    for (uint64_t i = 0; i < NbrOfIterations; i++)
    {
        __asm__("nop");
    }
}