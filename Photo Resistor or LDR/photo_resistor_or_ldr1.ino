int state=0;
void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
  int b = map(a,6,679,0,255);
  /*Serial.println(b);
  analogWrite(11,b);*/
  if(a<400)
  {
    if(state==0)
    {
      state=1;
      digitalWrite(11,1);
      delay(500);
    }
    else if(state==1)
    {
      state=0;
      digitalWrite(11,0);
      delay(500);
    }
  }
  else
  {
    analogWrite(11,a);
  }
}