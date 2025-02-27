#include <Arduino.h>

// Define sensor pins
const int sensorPower = 7;  // Digital pin to power the sensor
const int sensorPin = A0;   // Analog pin to read sensor data

void setup() {
  pinMode(sensorPower, OUTPUT);  // Set sensor power pin as output
  digitalWrite(sensorPower, LOW); // Keep sensor off initially
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  digitalWrite(sensorPower, HIGH); // Turn on sensor
  delay(10); // Allow stabilization

  int sensorValue = analogRead(sensorPin); // Read sensor data
  digitalWrite(sensorPower, LOW); // Turn off sensor to reduce corrosion

  Serial.println(sensorValue); // Output only the value for Serial Plotter

  delay(100); // Shorter delay for smoother graph updates
}
