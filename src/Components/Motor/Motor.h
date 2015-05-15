/** \file
 *
 * Motor.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "Component.h"

class Motor : public Component {
public:
	Motor();
	Motor(String name);
	virtual ~Motor();

	String getLoggingInfo();
};

#endif /* MOTOR_H_ */
