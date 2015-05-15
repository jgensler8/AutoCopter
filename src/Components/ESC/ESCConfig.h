/** \file
 *
 * ESCConfig.h
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#ifndef ESCCONFIG_H_
#define ESCCONFIG_H_

#include "ESC.h"

enum ESCLAYOUT { TRI, QUAD, HEXA, OCTA };

class ESCConfig {
public:
	ESCConfig();
	ESCConfig(ESCLAYOUT layout,
			ESC e1,
			ESC e2,
			ESC e3,
			ESC e4,
			ESC e5,
			ESC e6,
			ESC e7,
			ESC e8);
	virtual ~ESCConfig();

	bool validateLayout();
	String getLoggingInfo();
private:
	ESCLAYOUT layout;
	ESC e1;
	ESC e2;
	ESC e3;
	ESC e4;
	ESC e5;
	ESC e6;
	ESC e7;
	ESC e8;
};

#endif /* ESCCONFIG_H_ */
