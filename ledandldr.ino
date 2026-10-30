int ldrpin=A4;
int led = 4;
void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  int lightvalue=analogRead(ldrpin);
  if(lightvalue>=200){
    Serial.print("Light Reading:");
    Serial.println(lightvalue);
    Serial.println("DARK");
    digitalWrite(led,HIGH);
  }
  else{
    Serial.print("Light Reading:");
    Serial.println(lightvalue);
    Serial.println("BRIGHT");
  }
  delay(1000);
}
