void setup()
{
  Serial.begin(9600);
  pinMode(11,INPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  int a = digitalRead(11);
  Serial.println(a);
  if(a==1)
  {
    digitalWrite(10,1);
  }
  else
  {
    digitalWrite(10,0);
  }
    
}