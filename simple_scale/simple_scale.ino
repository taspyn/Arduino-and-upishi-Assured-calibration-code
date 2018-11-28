#include "HX711.h"


// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const byte hx711_data_pin = A3;
const byte hx711_clock_pin = A2;

HX711 scale(hx711_data_pin, hx711_clock_pin);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  scale.set_scale(11000);
  scale.tare();
}

void loop() {

  Serial.println(scale.get_units(), 1);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Weight: ");
  lcd.print(scale.get_units(), 1);
  lcd.print(" Kg");
  delay(500);
}
