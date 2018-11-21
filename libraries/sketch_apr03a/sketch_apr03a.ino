  int LED = 13;
void setup() {
  Serial.begin(19200);
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);

}

void loop() {
if (Serial.available()>0){
  char ch = Serial.read();
//  Serial.print(Serial.read());
//    char ch = Serial.read();
    Serial.print(ch);
    if (ch == '3'){
      digitalWrite(13,HIGH);
    }
    if (ch == '4'){
      digitalWrite(13,LOW);
    }

}
}
