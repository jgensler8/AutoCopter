/** \file
 *
 * Component.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <WString.h>

/**
 * This virtual class represents every physical device used on the MultiCopter.
 */
class Component {
public:
	Component(String name);
	virtual ~Component();

	String getLoggingInfo();
private:
	String name;
};

#endif /* COMPONENT_H_ */
