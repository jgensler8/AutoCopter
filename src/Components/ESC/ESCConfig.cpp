/** \file
 *
 * ESCConfig.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "ESCConfig.h"

ESCConfig::ESCConfig() {

}

ESCConfig::ESCConfig(ESCLAYOUT layout,
		ESC e1, ESC e2, ESC e3, ESC e4,
		ESC e5, ESC e6, ESC e7, ESC e8) {
	switch(layout)
	{
		TRI:
			this->e1 = e1;
			this->e2 = e2;
			this->e3 = e3;
			break;
		QUAD:
			this->e1 = e1;
			this->e2 = e2;
			this->e3 = e3;
			this->e4 = e4;
			break;
		HEXA:
			this->e1 = e1;
			this->e2 = e2;
			this->e3 = e3;
			this->e4 = e4;
			this->e5 = e5;
			this->e6 = e6;
			break;
		OCTA:
			this->e1 = e1;
			this->e2 = e2;
			this->e3 = e3;
			this->e4 = e4;
			this->e5 = e5;
			this->e6 = e6;
			this->e7 = e7;
			this->e8 = e8;
			break;
	}
}

ESCConfig::~ESCConfig() {

}

bool ESCConfig::validateLayout()
{
	//TODO fix validate layout
	return true;
}

String ESCConfig::getLoggingInfo() {
	return this->e1.getLoggingInfo();
}
