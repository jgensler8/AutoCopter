/** \file
 *
 * MPU6050.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef MPU6050_H_
#define MPU6050_H_

#include "AccelerometerSensor.h"
#include "GyroscopeSensor.h"

class MPU6050 : public AccelerometerSensor, public GyroscopeSensor {
public:
	MPU6050();
	virtual ~MPU6050();
};

#endif /* MPU6050_H_ */
