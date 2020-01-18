void setup()
{
  Serial.begin(9600);
  pinMode(11,INPUT);
}

void loop()
{
  int a = digitalRead(11);
  Serial.println(a);
}