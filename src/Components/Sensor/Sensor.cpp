/** \file
 *
 * Sensor.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "Sensor.h"

/**
 * Construct a new Sensor with the given name.
 */
Sensor::Sensor(String name) : Component(name) {

}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}

String Sensor::getLoggingInfo() {
	return Component::getLoggingInfo() + "Sensor;";
}

void Sensor::updateReadings() {

}
