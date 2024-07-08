// Define the analog pin connected to the gas sensor
const int GAS_SENSOR_PIN = A0;


void setup() {
  // Start serial communication with a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the gas sensor
  int sensorValue = analogRead(GAS_SENSOR_PIN);

  // Print the sensor value to the serial monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Delay for stability
  delay(1000);
}
