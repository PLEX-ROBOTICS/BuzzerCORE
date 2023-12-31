#include "BuzzerCORE.h"

unsigned int frequency = 1000;  
unsigned int onDuration = 50;
unsigned int offDuration = 100;
unsigned int beeps = 2;
unsigned int pauseDuration = 500;
unsigned int cycles = 10;

void done() {
	Serial.print("Done!");
}

void setup() {
	Serial.begin(115200);
	/* Start a beeping sequence. */
	Buzzer.beep(
		frequency,		// Frequency in hertz(HZ). 
		onDuration, 	// On Duration in milliseconds(ms).
		offDuration, 	// Off Duration in milliseconds(ms).
		beeps, 			// The number of beeps per cycle.
		pauseDuration, 	// Pause duration.
		cycles, 		// The number of cycle.
		done			// [Optional] Callback. A function to call when the sequence ends.
	);
}

void loop() {
	/* Always call this function in the loop for the BuzzerCORE library to work. */
	Buzzer.update();
}
