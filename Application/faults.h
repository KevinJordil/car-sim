#ifndef FAULTS_H
#define FAULTS_H

#include <stdio.h>

#include "EventRecorder.h"

#define CANNOT_CREATE_TIMER 0x01U

static void error_handler(void);
void startup_error_handler(void);
void app_error_handler(uint32_t errNo);

#endif  // FAULTS_H
