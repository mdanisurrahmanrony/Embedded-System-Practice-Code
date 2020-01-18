#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(10);
  pinMode(A1, INPUT);
}

void loop()
{
  float a = analogRead(A1);
  if(a<300){
    servo.write(60);
  }
  else{
    servo.write(0);
  }
}