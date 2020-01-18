void setup()
{
  Serial.begin(9600);  
  pinMode(10,OUTPUT);
}

void loop()
{
  tone(10,200,1000);
  delay(500);
  noTone(10);
  delay(500);    
}