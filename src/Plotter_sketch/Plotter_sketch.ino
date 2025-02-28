#include <Arduino.h>

// Define sensor pins
const int sensorPower = 7;  // Digital pin to power the sensor
const int sensorPin = A0;   // Analog pin to read sensor data

// LED pins
const int green1 = 12;
const int green2 = 8;
const int yellow1 = 6;
const int yellow2 = 5;
const int red1 = 4;
const int red2 = 3;

void setup() {
    // Initialize LED pins as outputs
    pinMode(green1, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);

    pinMode(sensorPower, OUTPUT);    // Set sensor power pin as output
    digitalWrite(sensorPower, LOW);  // Keep sensor off initially
    Serial.begin(9600);              // Initialize serial communication

    // Quick LED test sequence
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, HIGH);
    delay(500);
    digitalWrite(green1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    delay(500);
}

void loop() {
    digitalWrite(sensorPower, HIGH);  // Turn on sensor
    delay(10);                        // Allow stabilization

    int sensorValue = analogRead(sensorPin);  // Read sensor data
    digitalWrite(sensorPower, LOW);           // Turn off sensor to reduce corrosion

    Serial.println(sensorValue);  // Print value to Serial Plotter

    // Control LEDs based on sensor reading
    if (sensorValue >= 0 && sensorValue <= 350) {
        // Turn on Green LEDs
        digitalWrite(green1, LOW);
        digitalWrite(green2, LOW);
        digitalWrite(yellow1, LOW);
        digitalWrite(yellow2, LOW);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, HIGH);
    } else if (sensorValue > 350 && sensorValue <= 450) {
        // Turn on Green and Yellow LEDs
        digitalWrite(green1, LOW);
        digitalWrite(green2, LOW);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, HIGH);
    } else {
        // Turn on Green, Yellow, and Red LEDs
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, HIGH);
    }

    delay(100);  // Short delay for smoother updates
}
