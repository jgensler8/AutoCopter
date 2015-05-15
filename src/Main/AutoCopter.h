/** \file
 * AutoCopter.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef AUTOCOPTER_H_
#define AUTOCOPTER_H_

#include "PartsList.h"

/**
 * Thin class over Autocopter.ino. Created solely for Doxygen ease of use.
 */
class AutoCopter {
public:
	AutoCopter(PartsList partsList);
	virtual ~AutoCopter();

	void setup();
	void loop();
private:
	PartsList partsList;
};

#endif /* AUTOCOPTER_H_ */
