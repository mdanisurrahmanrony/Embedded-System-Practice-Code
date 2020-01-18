void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  delay(300);
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,0);
  delay(300);
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,1);
  delay(300);
}