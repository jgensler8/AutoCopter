/** \file
 *
 * PartsList.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "PartsList.h"

PartsList::PartsList() {

}

PartsList::PartsList(
		CommandInput commandInput,
		ESCConfig escConfig
		) {
	this->commandInput = commandInput;
	this->escConfig = escConfig;
}

PartsList::~PartsList() {

}

String PartsList::getLoggingInfo() {
	return "PartsList:" + this->escConfig.getLoggingInfo();
}
