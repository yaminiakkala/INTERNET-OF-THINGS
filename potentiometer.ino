int sensorPin=A0;
int sensorValue=0;

void setup() {
  Serial.begin(9600);


}

void loop() {
  // read the value from the sensor and display it every second
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(1000);
}
