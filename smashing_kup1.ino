// C++ code
//

#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 8, 9, 10, 11);
const int contrast = 5;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

void setup()
{
  Serial.begin(9600);
  
  analogWrite(contrast, 100);
  lcd.begin(16, 2);
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  
}

void loop()
{
  if (buttonPin1 == HIGH) {
  
  }
  if (buttonPin2 == HIGH) {
  
  }
  if (buttonPin3 == HIGH) {
  
  }
}