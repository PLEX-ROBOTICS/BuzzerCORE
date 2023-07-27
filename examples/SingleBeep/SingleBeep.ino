#include "BuzzerCORE.h"

unsigned int frequency = 1000;
unsigned int duration = 1000;

void done() {
	Serial.println("Done!");
}

void setup() {
	Serial.begin(115200);
	/* Single beep at a given frequency, for an specific duration, with callback functionality */
	Buzzer.singleBeep(
		frequency, 	// Frequency in hertz(HZ).  
		duration, 	// Duration of the beep in milliseconds(ms). 
		done		// [Optional] Function to call when done.
	);
}

void loop() {
	/* Always call this function in the loop for the BuzzerCORE library to work. */
	Buzzer.update();
}
