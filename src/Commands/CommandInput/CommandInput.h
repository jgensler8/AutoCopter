/** \file
 *
 * CommandInput.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef COMMANDINPUT_H_
#define COMMANDINPUT_H_

#include "Command.h"

/**
 * Any source of commands. Could be through Bluetooth, Wifi, SPI, button pressing, etc...
 */
class CommandInput {
public:
	CommandInput();
	virtual ~CommandInput();

	virtual Command getNextCommand();
	virtual bool hasNextCommand();
};

#endif /* COMMANDINPUT_H_ */
