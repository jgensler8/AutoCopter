/** \file
 *
 * CommandInput.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "CommandInput.h"

CommandInput::CommandInput() {

}

CommandInput::~CommandInput() {

}

Command CommandInput::getNextCommand() {
	return Command(NONE,0);
}

bool CommandInput::hasNextCommand() {
	return false;
}
