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
#include <Servo.h>

/**
 * ESC set voltage going to the motors. Basically, control where we are going.
 * @param pin: what analog pin to write to
 * @param position: what position, clockwise from facing front, we are in. See picture somewhere...
 */
class ESC : public Component {
public:
	ESC( const ESC& other );
	ESC( const int &pin, const int &position, const Motor &motor);
	virtual ~ESC();

	bool validate(const int &expectedPosition);
	void updateVoltage(const int &voltage, Servo servo);
	void testMotor(Servo servo);
	void setup(Servo servo);
private:
	int pin;
	int position;
	Motor motor;
	float voltage;
};

#endif /* ESC_H_ */
