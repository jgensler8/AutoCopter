/** \file
 *
 * BMP180.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef BMP180_H_
#define BMP180_H_

#include "BarometricSensor.h"

/**
 * This class represents the specific piece of hardware: BMP180
 */
class BMP180: public BarometricSensor {
public:
	BMP180();
	virtual ~BMP180();

	String getLoggingInfo();

	void updateReadings();
};

#endif /* BMP180_H_ */
