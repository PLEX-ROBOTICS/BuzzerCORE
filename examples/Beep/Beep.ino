#include "BuzzerCORE.h"

unsigned int frequency = 1000;
unsigned int beeps = 10;

void done() {
	Serial.println("Done!");
}

void setup() {
	Serial.begin(115200);

	/* Beep continuously at a given frequency. */
	// Buzzer.beep(frequency);

	/* Beep at a given frequency an specific number of times. */
	// Buzzer.beep(frequency, beeps);
	
	/* Beep at a given frequency an specific number of times, with callback functionality. */
	// Buzzer.beep(frequency, beeps, done);

	/* Use this function to stop the beeping. You may call this function at all time, everywhere in the code. */
	// Buzzer.stopBeep();
}

void loop() {
	/* Always call this function in the loop for the BuzzerCORE library to work. */
	Buzzer.update();
}
