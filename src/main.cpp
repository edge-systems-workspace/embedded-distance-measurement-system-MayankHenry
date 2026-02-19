#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

const int trigPin = 9;
const int echoPin = 10;


long duration = 0;
float distance = 0;


void setup() {

    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);


    // TODO 7:
    // Configure ECHO as INPUT

    // TODO 8:
    // Print system initialization message
}

void loop() {

    // TODO 9:
    // Set TRIG LOW for 2 microseconds

    // TODO 10:
    // Send 10 microsecond pulse on TRIG

    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
