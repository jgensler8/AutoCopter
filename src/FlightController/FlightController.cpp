/** \file
 *
 * FlightController.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "FlightController.h"

FlightController::FlightController() {

}

FlightController::~FlightController() {

}

/**
 * Dispatches commands based on sensors
 */
void FlightController::stabilize(PartsList partsList) {
	partsList.escConfig.updateVoltage(1,0);
	partsList.escConfig.updateVoltage(2,0);
	partsList.escConfig.updateVoltage(3,0);
	partsList.escConfig.updateVoltage(4,0);
	partsList.escConfig.updateVoltage(5,0);
	partsList.escConfig.updateVoltage(6,0);
	delay(500);
	partsList.escConfig.updateVoltage(1,150);
	partsList.escConfig.updateVoltage(2,150);
	partsList.escConfig.updateVoltage(3,150);
	partsList.escConfig.updateVoltage(4,150);
	partsList.escConfig.updateVoltage(5,150);
	partsList.escConfig.updateVoltage(6,150);
	delay(500);
}
