void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  //Serial.println(a);
  /*analogWrite(11,255);
  delay(500);
  analogWrite(11,20);
  delay(500);*/
  int b = map(a,0,1023,0,255);
  analogWrite(11,b);
  Serial.println(b);
}