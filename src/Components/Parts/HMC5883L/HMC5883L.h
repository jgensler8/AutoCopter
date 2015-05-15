/** \file
 *
 * HMC5883L.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef HMC5883L_H_
#define HMC5883L_H_

#include "MagnetometerSensor.h"

class HMC5883L : public MagnetometerSensor {
public:
	HMC5883L();
	virtual ~HMC5883L();
};

#endif /* HMC5883L_H_ */
