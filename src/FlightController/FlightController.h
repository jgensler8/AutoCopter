/** \file
 *
 * FlightController.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef FLIGHTCONTROLLER_H_
#define FLIGHTCONTROLLER_H_

/**
 * Flight Controller is composed of physical parts that enable it to fly.
 * Flight controller decides when to read from each part.
 */
class FlightController {
public:
	FlightController();
	virtual ~FlightController();
};

#endif /* FLIGHTCONTROLLER_H_ */
