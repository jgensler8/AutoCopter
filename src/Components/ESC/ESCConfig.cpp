/** \file
 *
 * ESCConfig.cpp
 *
 *  Created on: May 14, 2015
 *      Author: user
 */

#include "ESCConfig.h"

Servo ESCConfig::s1;
Servo ESCConfig::s2;
Servo ESCConfig::s3;
Servo ESCConfig::s4;
Servo ESCConfig::s5;
Servo ESCConfig::s6;
Servo ESCConfig::s7;
Servo ESCConfig::s8;

ESCConfig::ESCConfig( const ESCConfig& other ) : layout(other.layout),
		e1(other.e1), e2(other.e2), e3(other.e3), e4(other.e4),
		e5(other.e5), e6(other.e6), e7(other.e7), e8(other.e8) {

}

ESCConfig::ESCConfig(const ESCLAYOUT &layout,
		const ESC &e1, const ESC &e2, const ESC &e3, const ESC &e4,
		const ESC &e5, const ESC &e6, const ESC &e7, const ESC &e8) : layout(layout), e1(e1), e2(e2),
				e3(e3), e4(e4), e5(e5), e6(e6), e7(e7), e8(e8) {

}

ESCConfig::~ESCConfig() {

}

/**
 * Check that all relevant escs are in their correct pin position
 */
bool ESCConfig::validateLayout()
{
	//TODO: UPDATE
	return true;
}

/**
 * This function would arm the ESC if needed.
 * I believe this is setting the ESC to max before powering it on.
 */
bool ESCConfig::setupESCs() {
	switch(this->layout) {
	case TRI:
		//TODO: UPDATE
		break;
	case QUAD:
		//TODO: UPDATE
		break;
	case HEXA:
		this->e1.setup(this->s1);
		this->e2.setup(s2);
		this->e3.setup(s3);
		this->e4.setup(s4);
		this->e5.setup(s5);
		this->e6.setup(s6);
		break;
	case OCTA:
		//TODO: UPDATE
		break;
	}
	return true;
}

/**
 * Update a given position to a given voltage.
 * @param position: motor position (1 to 8 at the moment)
 * @param voltage: see ESC::updateVoltage for more detail
 */
void ESCConfig::updateVoltage(const int &position, const int &voltage) {
	switch(position) {
	case 1: this->e1.updateVoltage(voltage, s1); break;
	case 2: this->e2.updateVoltage(voltage, s2); break;
	case 3: this->e3.updateVoltage(voltage, s3); break;
	case 4: this->e4.updateVoltage(voltage, s4); break;
	case 5: this->e5.updateVoltage(voltage, s5); break;
	case 6: this->e6.updateVoltage(voltage, s6); break;
	case 7: this->e7.updateVoltage(voltage, s7); break;
	case 8: this->e8.updateVoltage(voltage, s8); break;
	}
}

/**
 * Spinning each motor in order of position. See ESC::testMotor for more detail.
 */
void ESCConfig::testMotors() {
	switch(this->layout) {
	case TRI:
		this->e1.testMotor(s1);
		this->e2.testMotor(s2);
		this->e3.testMotor(s3);
		break;
	case QUAD:
		this->e1.testMotor(s1);
		this->e2.testMotor(s2);
		this->e3.testMotor(s3);
		this->e4.testMotor(s4);
		break;
	case HEXA:
		this->e1.testMotor(s1);
		this->e2.testMotor(s2);
		this->e3.testMotor(s3);
		this->e4.testMotor(s4);
		this->e5.testMotor(s5);
		this->e6.testMotor(s6);
		break;
	case OCTA:
		this->e1.testMotor(s1);
		this->e2.testMotor(s2);
		this->e3.testMotor(s3);
		this->e4.testMotor(s4);
		this->e5.testMotor(s5);
		this->e6.testMotor(s6);
		this->e7.testMotor(s7);
		this->e8.testMotor(s8);
		break;
	}
}
