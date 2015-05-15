/** \file
 * AutoCopter.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef AUTOCOPTER_H_
#define AUTOCOPTER_H_

#include "BMP180.h"
#include <HardwareSerial.h>

/**
 * Thin class over Autocopter.ino. Created solely for Doxygen ease of use.
 */
class AutoCopter {
public:
	AutoCopter();
	virtual ~AutoCopter();

	void setup();
	void loop();
};

#endif /* AUTOCOPTER_H_ */
