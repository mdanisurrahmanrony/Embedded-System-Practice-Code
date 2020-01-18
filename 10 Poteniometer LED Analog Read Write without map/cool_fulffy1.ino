void setup()
{
 Serial.begin(9000);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
  analogWrite(11,255);
  delay(500);
  analogWrite(11,20);
  delay(500);
}