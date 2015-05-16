/** \file
 *
 * BarometricSensor.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef BAROMETRICSENSOR_H_
#define BAROMETRICSENSOR_H_

#include "Sensor.h"

/**
 * This virtual class represents the concept of a BarometricSensor because this
 * piece could be combined with other hardware.
 */
class BarometricSensor: public Sensor {
public:
	BarometricSensor();
	virtual ~BarometricSensor();

	void updateReadings();
	float getPressure();
private:
	float pressure;
};

#endif /* BAROMETRICSENSOR_H_ */
