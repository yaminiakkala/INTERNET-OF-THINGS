int val;
int tempPin=A1;

void setup() {
  Serial.begin(9600);
 

}

void loop() {
  val=analogRead(tempPin);
  float mv=(val/1024.0)*5000;
  float cel=mv/10;
  float farh=(cel*9)/5+32;
  //Temperature in Celcius
  Serial.print("TEMPERATURE=");
  Serial.print(cel);
  Serial.print("*c");
  Serial.println();
  //Temperature in fahrenheit
  Serial.print("TEMPERATURE=");
  Serial.print(farh);
  Serial.print("*F");
  Serial.println();
  
  
 
}
