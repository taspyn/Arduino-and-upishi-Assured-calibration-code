#include <Servo.h>

Servo myservo;

void setup() {
  Serial.begin(19200);
  myservo.attach(13);

}

void loop() {
if (Serial.available()){     //if anything comes in serial (USB),
  char ch = Serial.read();
    Serial.write(ch);       //read it and send it out serial1(pins a and b)
    if (ch == 'a'){
      myservo.write(270);
    }
    if (ch == 'b'){
      myservo.write(0);

    }

  }
}


                 //brown cable goes to GND.   RED goes to 5V  YELLOW GOES TO 13
