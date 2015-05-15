/** \file
 *
 * Protocol.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef PROTOCOL_H_
#define PROTOCOL_H_

/**
 * Might be useful for something
 */
enum DIRECTION {
	NORTH,
	EAST,
	SOUTH,
	WEST
};

/**
 * Possible commands. Might move to a more compact or predictable structure.
 */
enum COMMAND {
	// none is never really used for anything but here for convinience
	NONE,
	// used if a infinite command is triggered
	INTERRUPT,
	// for control
	FORWARD,
	BACKWARD,
	LEFT,
	RIGHT,
	// for fun
	FLIP,
	WAVE
};

#endif /* PROTOCOL_H_ */
