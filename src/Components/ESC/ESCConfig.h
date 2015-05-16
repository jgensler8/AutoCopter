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

/**
 * Possible AutoCopter layouts: Tri(3), Quad(4), Hexa(6), Octa(8)
 */
enum ESCLAYOUT { TRI, QUAD, HEXA, OCTA };

/**
 * Holds a generic configuration of ESC's
 */
class ESCConfig {
public:
	ESCConfig( const ESCConfig& other );
	ESCConfig(const ESCLAYOUT &layout,
			const ESC &e1,
			const ESC &e2,
			const ESC &e3,
			const ESC &e4,
			const ESC &e5,
			const ESC &e6,
			const ESC &e7,
			const ESC &e8);
	virtual ~ESCConfig();

	bool validateLayout();
	bool setupESCs();
	void updateVoltage(const int &position, const int &voltage);
	void testMotors();
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
	static Servo s1;
	static Servo s2;
	static Servo s3;
	static Servo s4;
	static Servo s5;
	static Servo s6;
	static Servo s7;
	static Servo s8;
};

#endif /* ESCCONFIG_H_ */
