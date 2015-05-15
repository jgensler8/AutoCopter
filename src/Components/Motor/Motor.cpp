/** \file
 *
 * Motor.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include <Motor/Motor.h>

/**
 * Construct a motor with the given name
 */
Motor::Motor(String name) : Component(name) {

}

Motor::Motor() : Component("default motor") {

}

Motor::~Motor() {

}

String Motor::getLoggingInfo() {
	return Component::getLoggingInfo();
}
