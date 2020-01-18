#include<Servo.h>

Servo serv;

void setup()
{
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
  serv.attach(8);
}

void loop()
{
  /*serv.write(180);
  delay(2000);
  serv.write(0);
  delay(2000);*/
  
  /*digitalWrite(7,0);
  delay(10);
  digitalWrite(7,1);
  delay(10);
  digitalWrite(7,0);*/
  /*float a = pulseIn(6,1);
  Serial.println(a);*/
  /*float a = pulseIn(6,1);
  a = a/29/2;
  Serial.println(a);*/
  
  digitalWrite(7,0);
  delay(10);
  digitalWrite(7,1);
  delay(10);
  digitalWrite(7,0);
  float a = pulseIn(6,1);    
  a = a/29/2;
  Serial.println(a);
  if(a<150)
  {
    serv.write(0);
  }
  else
  {
    serv.write(180);
  }
}