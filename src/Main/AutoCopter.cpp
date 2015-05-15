/** \file
 *
 * AutoCopter.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "AutoCopter.h"

AutoCopter::AutoCopter() {

}

AutoCopter::~AutoCopter() {

}

void AutoCopter::setup() {
	BMP180 mybmp;
	Serial.begin(9600);
	Serial.println(mybmp.getLoggingInfo());
}

void AutoCopter::loop() {

}

