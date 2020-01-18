void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop()
{
  int a = Serial.read();
  Serial.println(a);
}