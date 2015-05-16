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
	Motor(const Motor& motor);
	Motor();
	virtual ~Motor();
};

#endif /* MOTOR_H_ */
