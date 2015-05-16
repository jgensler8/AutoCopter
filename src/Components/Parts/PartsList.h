/** \file
 *
 * PartsList.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef PARTSLIST_H_
#define PARTSLIST_H_

#include "CommandInput.h"
#include "ESCConfig.h"
#include "AccelerometerSensor.h"
#include "GyroscopeSensor.h"
#include "MagnetometerSensor.h"

/**
 * Used to neatly organize what is available on the Copter
 */
class PartsList {
public:
	PartsList(
			const CommandInput &input,
			const ESCConfig &escconfig,
			const AccelerometerSensor &accelerometerSensor,
			const GyroscopeSensor &gyroscopeSensor,
			const MagnetometerSensor &magnetometerSensor
			);
	virtual ~PartsList();
	CommandInput commandInput;
	ESCConfig escConfig;
	AccelerometerSensor accelerometerSensor;
	GyroscopeSensor gyroscopeSensor;
	MagnetometerSensor magnetometerSensor;
};

#endif /* PARTSLIST_H_ */
