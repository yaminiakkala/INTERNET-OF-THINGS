int btn= 2;
int led=9;
int temp;
void setup() {
  pinMode(btn,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  temp=digitalRead(btn);
  Serial.print("value of button");
  Serial.println(temp);
  if(temp==1)
    digitalWrite(led,HIGH);
  
  else
    digitalWrite(led,LOW);
  

}
