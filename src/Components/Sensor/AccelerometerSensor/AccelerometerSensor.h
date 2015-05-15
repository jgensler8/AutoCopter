/** \file
 *
 * AccelerometerSensor.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef ACCELEROMETERSENSOR_H_
#define ACCELEROMETERSENSOR_H_

#include "Sensor.h"

class AccelerometerSensor : public Sensor {
public:
	AccelerometerSensor(String name);
	virtual ~AccelerometerSensor();
};

#endif /* ACCELEROMETERSENSOR_H_ */
