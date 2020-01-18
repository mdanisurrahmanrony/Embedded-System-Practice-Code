void setup()
{
  Serial.begin(9000);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  int b = map(a,0,1023,0,255);
  Serial.println(b);
  analogWrite(11,b);
}