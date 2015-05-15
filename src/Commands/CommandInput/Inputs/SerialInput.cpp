/** \file
 * SerialInput.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include <SerialInput.h>

SerialInput::SerialInput(int baudRate) : CommandInput() {
	this->baudRate = baudRate;
}

SerialInput::~SerialInput() {

}

Command SerialInput::getNextCommand() {
	return Command(RIGHT,10);
}
