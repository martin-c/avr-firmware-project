/*! \file
 *  device-hardware.h
 *  wireless-sensor-02.1
 *
 * Copyright (c) 2015 Martin Clemons
 *
 * A brief description of what this file is for.
 */

#pragma once

#include <inttypes.h>
#include <avr/io.h>


/***            Public Variables            ***/

/***            Public Functions            ***/

void hwInitPins(void);
void hwInitCriticalPeripherals(void);
void hwInitPeripherals(void);
void hwInitDeviceDrivers(void);

