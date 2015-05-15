/** \file
 *
 * Component.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "Component.h"

/**
 * Construct a new Component with the given name.
 */
Component::Component(String name) {
	this->name = name;
}

/**
 * Unused
 */
Component::~Component() {

}

/**
 * Return a non-newline ended string containing information about the Component
 */
String Component::getLoggingInfo() {
	return "Component:" + this->name + ";";
}

