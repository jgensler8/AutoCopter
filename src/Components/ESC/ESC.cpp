/** \file
 *
 * ESC.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "ESC.h"

ESC::ESC() : Component("default ESC") {
	this->pin = 0;
	this->position = 0;
	this->voltage = 0;
}

ESC::ESC(String name, int pin, int position, Motor motor) : Component(name) {
	this->pin = pin;
	this->position = position;
	this->voltage = 0;
	this->motor = motor;
}

ESC::~ESC() {

}

/**
 * Updates the volatage for the ESC
 */
void ESC::updateVolatage(float voltage) {
	this->voltage = voltage;

	//TODO: add some digital write to servo using pin
}

/**
 *
 */
String ESC::getLoggingInfo() {
	return Component::getLoggingInfo() + "ESC:Voltage:" + this->voltage + ";" + this->motor.getLoggingInfo();
}
