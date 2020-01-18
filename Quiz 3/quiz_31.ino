#include<LiquidCrystal.h>
LiquidCrystal lcd(11,10,6,5,4,3);

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
}

void loop()
{
  digitalWrite(9,0);
  delay(10);
  digitalWrite(9,1);
  delay(10);
  digitalWrite(9,0);
  float a = pulseIn(8,1);
  a = a/29/2;
  Serial.println(a);
  if(a<90)
  {
    digitalWrite(7,1);
    lcd.print("Light On");  
    delay(1000);
    lcd.clear();
  }
  else
  {
    digitalWrite(7,0);
    lcd.print("Light Off");
    delay(1000);
    lcd.clear();
  }  
}
