void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop()
{  
  if(Serial.available()){
    char a = Serial.read();
    Serial.println(a);
  }
}