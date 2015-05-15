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

/**
 * Used to neatly organize what is available on the Copter
 */
class PartsList {
public:
	PartsList();
	PartsList(
			CommandInput input,
			ESCConfig escconfig
			);
	virtual ~PartsList();

	String getLoggingInfo();
private:
	CommandInput commandInput;
	ESCConfig escConfig;
};

#endif /* PARTSLIST_H_ */
