void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop()
{
  if(Serial.available()){
    char a = Serial.read();
    if(a == 'o'){
      Serial.println("Light is on");
      digitalWrite(12,1);
    }
    else if(a == 'f'){
      Serial.println("Light is off");
      digitalWrite(12,0);
    }
  }
}