/** \file
 *
 * BMP180.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "BMP180.h"

/**
 * Construct a new BMP180
 */
BMP180::BMP180() : BarometricSensor("BMP180") {

}

/**
 * Unused
 */
BMP180::~BMP180() {

}

/**
 * Return a non-newline ended string containing information about the Component
 */
String BMP180::getLoggingInfo() {
	return BarometricSensor::getLoggingInfo() + "BMP180;";
}

/**
 * Updates the current pressure reading
 */
void BMP180::updateReadings() {

}
