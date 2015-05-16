/** \file
 * AutoCopter.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef AUTOCOPTER_H_
#define AUTOCOPTER_H_

#include "PartsList.h"
#include "FlightController.h"

/**
 * Thin class over Autocopter.ino. Created solely for Doxygen ease of use.
 */
class AutoCopter {
public:
	AutoCopter(const PartsList &partsList, const FlightController &flightController);
	virtual ~AutoCopter();

	void setup();
	void loop();
private:
	PartsList partsList;
	FlightController flightController;
};

#endif /* AUTOCOPTER_H_ */
