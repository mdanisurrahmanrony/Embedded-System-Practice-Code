void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop()
{
  //For digitalWrite
  /*digitalWrite(6,1);*/
  
  //For analogWrite
  /*analogWrite(6,100);*/
  
  int a = analogRead(A0);
  Serial.println(a);
  /*int b = map(a,6,679,0,255);
  Serial.println(b);*/
  if(a<500)
  {
    digitalWrite(6,0);
  }
  else
  {
    digitalWrite(6,1);
  }
}