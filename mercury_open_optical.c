/*
    Project name : ESP8266 Mercury open optical module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-mercury-open-optical-module
*/

const int opticalSensorPin = D1; // Digital pin connected to the optical module OUT pin

void setup() {
  pinMode(opticalSensorPin, INPUT_PULLUP); // Set the pin as input with internal pull-up resistor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the optical sensor
  int sensorValue = digitalRead(opticalSensorPin);

  // Print the sensor value to the Serial Monitor
  if (sensorValue == LOW) {
    Serial.println("Object Detected");
  } else {
    Serial.println("No Object Detected");
  }

  delay(1000); // Delay before next reading
}
