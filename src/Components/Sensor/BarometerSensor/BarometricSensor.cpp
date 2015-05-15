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
BarometricSensor::BarometricSensor(String name) : Sensor(name) {
	this->pressure = -1;
}

/**
 * Unused
 */
BarometricSensor::~BarometricSensor() {

}

/**
 * Return a non-newline ended string containing information about the BarometricSensor
 */
String BarometricSensor::getLoggingInfo() {
	return Sensor::getLoggingInfo() + "BarometricSensor:Pressure:" + this->pressure + ";";
}

/**
 * Read the last updated pressure value
 */
float BarometricSensor::getPressure() {
	return this->pressure;
}

void BarometricSensor::updateReadings() {

}
