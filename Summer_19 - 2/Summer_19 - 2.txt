#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

void setup(){
  lcd.begin(16,2);
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
 int a = digitalRead(3);
 if(a==1)
 {
   digitalWrite(7,1);
 }
  else
  {
    digitalWrite(7,0);
    lcd.print("No Motion");
    lcd.setCursor(0,1);
    lcd.print("Detected");
    delay(500);
    lcd.clear();
  }
}
