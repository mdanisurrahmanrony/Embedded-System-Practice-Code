void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop()
{
  if(Serial.available()){
    int a = Serial.parseInt();
    if(a == 1){
      Serial.println("Light is on");
      digitalWrite(12,1);
    }
    else if(a == 0){
      Serial.println("Light is off");
      digitalWrite(12,0);
    }
  }
}