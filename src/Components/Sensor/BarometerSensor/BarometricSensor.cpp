/** \file
 *
 * BarometricSensor.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "BarometricSensor.h"

/**
 * Construct a new BarometricSensor with the given name.
 */
BarometricSensor::BarometricSensor() : Sensor() {
	this->pressure = -1;
}

/**
 * Unused
 */
BarometricSensor::~BarometricSensor() {

}

/**
 * Read the last updated pressure value
 */
float BarometricSensor::getPressure() {
	return this->pressure;
}

void BarometricSensor::updateReadings() {

}
