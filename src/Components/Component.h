/** \file
 *
 * Component.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <Arduino.h>

/**
 * This class represents every physical device used on the MultiCopter.
 */
class Component {
public:
	Component(const Component& other);
	Component();
	virtual ~Component();
};

#endif /* COMPONENT_H_ */
