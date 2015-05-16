/** \file
 *
 * Motor.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include <Motor/Motor.h>

/**
 * Create a Motor from another Motor
 */
Motor::Motor(const Motor& motor) : Component(motor) {

}

/**
 * Construct a motor with the given name
 */
Motor::Motor() : Component() {

}

Motor::~Motor() {

}
