
#include "AutoCopter.h"

AutoCopter copter;

//The setup function is called once at startup of the sketch
void setup()
{
	copter.setup();
}

// The loop function is called in an endless loop
void loop()
{
	copter.loop();
}
