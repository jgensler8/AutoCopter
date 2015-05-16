/** \file
 *
 * PartsList.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "PartsList.h"

PartsList::PartsList(
		const CommandInput &commandInput,
		const ESCConfig &escConfig,
		const AccelerometerSensor &accelerometerSensor,
		const GyroscopeSensor &gyroscopeSensor,
		const MagnetometerSensor &magnetometerSensor
		) : commandInput(commandInput),
		escConfig(escConfig),
		accelerometerSensor(accelerometerSensor),
		gyroscopeSensor(gyroscopeSensor),
		magnetometerSensor(magnetometerSensor){

}

PartsList::~PartsList() {

}
