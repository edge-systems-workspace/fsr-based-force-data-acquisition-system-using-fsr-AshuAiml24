#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author ASHU PAL
 * @date YYYY-MM-
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

#define FSR_PIN A0




 // Define FSR analog pin (Use A0)

int fsrValue = 0;
 // Create variable to store sensor reading
/**
 * @brief Initialize Serial communication and any required peripherals.
 *
 * This function configures the Serial port at 9600 baud and prints
 * an initialization banner to the Serial Monitor.
 *
 * @return void
 */

void setup() {

    Serial.begin(9600);
    Serial.println("=== FSR Force Measurement System Initialized ===");


    // Initialize Serial communication (9600 baud rate)

Serial.println("=== FSR Force Measurement System Initialized ===");}
    // Print system initialization message
}
/**
 * @brief Main loop: read FSR value and print status to Serial.
 *
 * Reads the analog value from the FSR sensor on `FSR_PIN`, prints the raw ADC
 * value and a simple thresholded status message. Loop delays 500 ms between reads.
 *
 * @return void
 */

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
