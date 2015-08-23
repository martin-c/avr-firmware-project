/*! \file
 *  embedded-device.h
 *
 *  This header file contains the public mutable state of the embedded device.
 *  A pointer to the device_s declared below is passed to all functions called
 *  by task scheduler.
 */
#pragma once

#include <inttypes.h>
#include <avr/io.h>


/* General data types common to many kinds of embedded devices */

//! generic embedded device datatype
typedef struct device_s device_t;


/*! Embedded device data structure.
 *  This structure defines all attributes of a specific device type.
 *  A pointer to this struct is passed to all functions called by the
 *  task scheduler.
 */
struct device_s {

    // put device-specific data here

};

