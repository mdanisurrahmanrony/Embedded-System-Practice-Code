void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  //Serial.println(a);
  int b = map(a,6,679,255,0);
  analogWrite(13,b);
  Serial.println(b);
}