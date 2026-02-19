#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Mayank
 * @date 2026-01-29
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
    pinMode(echoPin, INPUT);
    Serial.println("Ultrasonic Distance Measurement System Initialized");

}

void loop() {

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}
