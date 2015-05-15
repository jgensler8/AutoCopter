/** \file
 *
 * CommandInput.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include <Commands/CommandInput/CommandInput.h>

CommandInput::CommandInput() {

}

CommandInput::~CommandInput() {

}

Command CommandInput::getNextCommand() {
	return Command(NONE,0);
}
