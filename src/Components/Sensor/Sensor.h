/** \file
 *
 * Sensor.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include "Component.h"

/**
 * A Sensor is a Component that can gather information about anything.
 * An example include a barometric sensor or a temperature sensor.
 * A robot claw would NOT be a sensor.
 */
class Sensor: public Component {
public:
	Sensor();
	virtual ~Sensor();

	virtual void updateReadings();
};

#endif /* SENSOR_H_ */
