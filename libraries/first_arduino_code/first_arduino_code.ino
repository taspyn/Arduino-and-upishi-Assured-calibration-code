  int LED = 13;
  void setup() {
 pinMode(LED, OUTPUT);
 Serial.begin(9600);

}

void loop() {
 digitalWrite(LED,HIGH);
 Serial.print("LED ON\n");
 delay(500);
 digitalWrite(LED, LOW);
 Serial.print("LED  OFF\n");
  delay(500);

 
}
