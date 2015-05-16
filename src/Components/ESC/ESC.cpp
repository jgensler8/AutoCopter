/** \file
 *
 * ESC.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "ESC.h"

ESC::ESC( const ESC& other ) : Component(other), pin(other.pin), position(other.position),
	motor(other.motor), voltage(other.voltage) {
	//TODO: might need attach here
}

ESC::ESC( const int &pin, const int &position, const Motor &motor) :
	Component(), pin(pin), position(position), motor(motor) {
	this->voltage = 0;
	//Servo::attach(this->pin);
	//this->updateVoltage(0);
}

ESC::~ESC() {

}

/**
 * Check if our position is the expected position
 * @param expectedPosition: the position to check against
 */
bool ESC::validate(const int &expectedPosition) {
	return this->position == expectedPosition;
}

/**
 * Updates the voltage for the ESC.
 * @param voltage: Any number, though between 0 and 180 are better.
 */
void ESC::updateVoltage(const int &voltage, Servo servo) {
	this->voltage = voltage;
	servo.write(this->voltage);
	Serial.println(this->position);
	Serial.println(servo.attached());
	Serial.println(servo.read());
}

/**
 * Spin each motor at ~20% power for 1 second
 */
void ESC::testMotor(Servo servo) {
	this->updateVoltage(36, servo);
	delay(1000);
	this->updateVoltage(0, servo);
}

/**
 *
 */
void ESC::setup(Servo servo) {
	Serial.println(servo.attach(this->pin));
}
