/** \file
 *
 * AutoCopter.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "AutoCopter.h"

/**
 * Construct our Copter with a list of Parts and FlightController
 */
AutoCopter::AutoCopter(const PartsList &partsList, const FlightController &flightController) :
	partsList(partsList), flightController(flightController) {

}

AutoCopter::~AutoCopter() {

}

#include <HardwareSerial.h>

/**
 * Setup various parts in our Parts List. Then run some basic tests, if specified.
 */
void AutoCopter::setup() {
	// Setup ESC
	this->partsList.escConfig.setupESCs();
	// Run Motor Test
	this->partsList.escConfig.testMotors();
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
	if(this->partsList.commandInput.hasNextCommand()) {

	}
	else {
		Serial.println("STABILIZING");
		this->flightController.stabilize(this->partsList);
	}
}

