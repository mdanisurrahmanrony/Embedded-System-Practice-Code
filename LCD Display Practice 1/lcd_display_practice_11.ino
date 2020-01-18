#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
  lcd.begin(16,2);
}

void loop(){
  lcd.setCursor(3,0);
  lcd.print("WELCOME");
  lcd.setCursor(3,1);
  lcd.print("GUEST");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RONY");
  lcd.setCursor(0,1);
  lcd.print("ZZZZZ");  
  delay(5000);
  lcd.clear();
}