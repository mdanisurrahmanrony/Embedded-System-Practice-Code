#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int temp=30;

void setup(){
  lcd.begin(16,2);
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("A");
  lcd.setCursor(3,0);
  lcd.print("B");
  lcd.setCursor(0,1);
  lcd.print("CCC");
  lcd.setCursor(5,1);
  lcd.print("DDDD");
  //lcd.print("Temp: ");
  //lcd.print(temp);
  delay(500);
  lcd.clear();
}