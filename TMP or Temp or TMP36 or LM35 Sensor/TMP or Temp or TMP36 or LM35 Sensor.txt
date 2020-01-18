void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  /*float a = analogRead(A0);
  Serial.println(a);*/
  
  float a = analogRead(A0)*0.004882814;
  a = (a-0.5) * 100;
  Serial.println(a);
  
  if(a>35)
  {
    digitalWrite(11,1);
    delay(500);
    digitalWrite(11,0);
    delay(500);
  }
  
  /*int b = map(a,-40,125,0,255);
  analogWrite(11,b);
  Serial.println(b);*/  
}