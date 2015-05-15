/*
 * Command.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef COMMAND_H_
#define COMMAND_H_

#include "Protocol.h"

class Command {
public:
	Command(COMMAND command, int scalar);
	virtual ~Command();
private:
	COMMAND command;
	int scalar;
};

#endif /* COMMAND_H_ */
