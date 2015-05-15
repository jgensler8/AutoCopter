
#include "AutoCopter.h"

#include "ESCConfig.h"
#include "SerialInput.h"

Motor m1("Sunnysky X2212 980KV");
Motor m2("Sunnysky X2212 980KV");
Motor m3("Sunnysky X2212 980KV");
Motor m4("Sunnysky X2212 980KV");
Motor m5("Sunnysky X2212 980KV");
Motor m6("Sunnysky X2212 980KV");
Motor m7("None");
Motor m8("None");

ESC esc1("HP Simonk 30A", 0, 0, m1);
ESC esc2("HP Simonk 30A", 0, 0, m2);
ESC esc3("HP Simonk 30A", 0, 0, m3);
ESC esc4("HP Simonk 30A", 0, 0, m4);
ESC esc5("HP Simonk 30A", 0, 0, m5);
ESC esc6("HP Simonk 30A", 0, 0, m6);
ESC esc7("HP Simonk 30A", 0, 0, m6);
ESC esc8("HP Simonk 30A", 0, 0, m7);

ESCConfig escConfig(
		HEXA,
		esc1, esc2, esc3, esc4,
		esc5, esc6, esc7, esc8
		);

SerialInput serialInput(9600);

PartsList list(serialInput, escConfig);

PartsList list2(
		SerialInput(9600),
		ESCConfig(
				HEXA,
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV")),
				ESC("HP Simonk 30A", 0, 0, Motor("Sunnysky X2212 980KV"))
				)
		);

AutoCopter *copter;

//The setup function is called once at startup of the sketch
void setup()
{
	copter = new AutoCopter(list);
	copter->setup();
}

// The loop function is called in an endless loop
void loop()
{
	copter->loop();
}
