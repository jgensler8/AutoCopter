/** \file
 *
 * ESC.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef ESC_H_
#define ESC_H_

#include "Motor.h"

/**
 * ESC set voltage going to the motors. Basically, control where we are going.
 * @param pin: what analog pin to write to
 * @param position: what position, clockwise from facing front, we are in. See picture somewhere...
 */
class ESC : public Component {
public:
	ESC();
	ESC(String name, int pin, int position, Motor motor);
	virtual ~ESC();

	void updateVolatage(float voltage);
	String getLoggingInfo();
private:
	float voltage;
	int pin;
	int position;
	Motor motor;
};

#endif /* ESC_H_ */
