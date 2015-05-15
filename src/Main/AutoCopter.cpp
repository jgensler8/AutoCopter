/** \file
 *
 * AutoCopter.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "AutoCopter.h"

/**
 * Construct our Copter with a list of Parts
 */
AutoCopter::AutoCopter(PartsList partsList) {
	this->partsList = partsList;
}

AutoCopter::~AutoCopter() {

}

#include <HardwareSerial.h>

/**
 * Setup various parts in our Parts List. Then run some basic tests, if specified.
 */
void AutoCopter::setup() {
	//TODO: Shallow copy of WString
	Serial.begin(9600);
	Serial.println(this->partsList.getLoggingInfo());

	// Setup ESC ?

	// Run Motor Test ?

	// Setup Other items on parts list
}

/**
 * Basic flight loop.
 * 1. Get a command
 * 2. If command -> do it
 * 2. Else -> Stabilize using a Stabilizer if available
 */
void AutoCopter::loop() {
	// Get command from command input

	// If command, do it

	// otherwise, stay stable and give control to the adjuster
}

