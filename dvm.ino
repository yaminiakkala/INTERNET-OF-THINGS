int sensorPin=A0;
int sensorValue=0;

void setup() {
  Serial.begin(9600);


}

void loop() {
  // read the value from the sensor and display it every second
  sensorValue=analogRead(sensorPin);
  float voltage=sensorValue*(5.0/1023.0);
  Serial.print(voltage);
  Serial.print("volts");
  Serial.println();
  delay(1000);
}
