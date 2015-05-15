/** \file
 *
 * SerialInput.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef SERIALINPUT_H_
#define SERIALINPUT_H_

#include "CommandInput.h"

class SerialInput : public CommandInput {
public:
	SerialInput(int baudRate);
	virtual ~SerialInput();

	Command getNextCommand();
private:
	int baudRate;
};

#endif /* SERIALINPUT_H_ */
