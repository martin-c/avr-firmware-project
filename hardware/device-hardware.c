/*! \file
 *  device-hardware.c
 *  PROJECT NAME
 *
 *  Copyright (c) 2015 Martin Clemons
 *
 *  This file includes source for device- and project specific hardware
 *  abstraction. For example, interrupt handlers to wake from sleep, basic
 *  pin configuration, additional peripheral functions etc. can all be defined
 *  here.
 */

#include "boards/all.h"



/***                Definitions                 ***/
/*! \privatesection */



/***         Private Global Variables           ***/



/***          Public Global Variables           ***/
/*! \publicsection */



/***        Private Function Prototypes         ***/
/*! \privatesection */
void initAnalogPins(void);
void initDigitalInputPins(void);
void initDigitalOutputPins(void);



/***                   ISRs                     ***/



/***             Private Functions              ***/

/*! Initialize analog input pins
 */
void initAnalogPins(void)
{
    
}

/*! Initialize digital input pins including pull-up/down states
 *  and interrupt registers.
 */
void initDigitalInputPins(void)
{
    
}

/*! Initialize digital output pins including initial states
 *
 */
void initDigitalOutputPins(void)
{
    
}



/***             Public Functions               ***/
/*! \publicsection */

/*! Initialize general I/O pins. Function should be called as
 *  soon as possible after device comes out of reset.
 */
void hwInitPins(void)
{
    initAnalogPins();
    initDigitalInputPins();
    initDigitalOutputPins();
}

/*! Initialize critical AVR peripherals. Should be performed as soon as possible
 * after device reset. Critical peripherals include clock, DMA, and interrupt
 * controller.
 */
void hwInitCriticalPeripherals(void)
{
    
}

/*! Initialize general AVR peripherals
 *
 */
void hwInitPeripherals(void)
{
    
}

/*! Initialize device drivers for hardware external to AVR
 *
 */
void hwInitDeviceDrivers(void)
{
    
}

