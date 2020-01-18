void setup()
{
  Serial.begin(9000);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
}