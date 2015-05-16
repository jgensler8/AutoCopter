
#include "AutoCopter.h"
#include "FlightController.h"

#include "ESCConfig.h"
#include "SerialInput.h"
#include "BMP180.h" // Barometer
#include "HMC5883L.h" // Magnetometer
#include "MPU6050.h" // Gyroscope + Accelerometer

AutoCopter *copter;

//The setup function is called once at startup of the sketch
void setup()
{
	Serial.begin(9600);

	PartsList list(
			SerialInput(9600),
			ESCConfig(
					HEXA,
					ESC(3, 1, Motor()),
					ESC(5, 2, Motor()),
					ESC(6, 3, Motor()),
					ESC(9, 4, Motor()),
					ESC(10, 5, Motor()),
					ESC(11, 6, Motor()),
					ESC(0, 0, Motor()),
					ESC(0, 0, Motor())
					),
			MPU6050(),
			MPU6050(),
			HMC5883L()
			);

	//FlightController flightController();

	copter = new AutoCopter(list, FlightController());
	Serial.println("SETING UP");
	copter->setup();
	Serial.println("DONE SETTING UP");
}

// The loop function is called in an endless loop
void loop()
{
	copter->loop();
}
