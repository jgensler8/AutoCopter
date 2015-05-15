/*
 * Command.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include <Command.h>

Command::Command(COMMAND command, int scalar) {
	this->command = command;
	this->scalar = scalar;
}

Command::~Command() {

}

