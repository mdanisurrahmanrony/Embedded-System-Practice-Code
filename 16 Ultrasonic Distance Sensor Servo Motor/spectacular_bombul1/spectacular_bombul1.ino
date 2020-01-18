#include <Servo.h>

Servo serv;

void setup()
{
  Serial.begin(9600);
  serv.attach(7);
  pinMode(8,INPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  //Code only for running Micro Servo (motor)
  /*serv.write(180);
  delay(2000);
  serv.write(0);
  delay(2000);*/
  
  //Code only for running Ultrasonic Distance Sensor
  /*digitalWrite(12,0);
  delay(10);
  digitalWrite(12,1);
  delay(10);
  digitalWrite(12,0);*/
  /*float a = pulseIn(8,1);
  Serial.println(a);*/
  /*float a = pulseIn(8,1);
  a = a/29/2;
  Serial.println(a);*/
  
  //Servo motor with sensor
  digitalWrite(12,0);
  delay(10);
  digitalWrite(12,1);
  delay(10);
  digitalWrite(12,0);
  float a = pulseIn(8,1);
  a = a/29/2;
  Serial.println(a);  
  }  
}