int pin = 7;
 unsigned long duration;
void setup() {
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  duration = pulseIn(pin,HIGH)
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
   duration = pulseIn(pin,HIGH);
   distance = duration / 58;
   analogWrite(LED,distance);
   delay(100);
}   
