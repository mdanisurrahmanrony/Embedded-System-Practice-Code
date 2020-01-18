int state = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  int a = digitalRead(7);
  Serial.println(a);
  if(a==1){
    if(state==0){
      state=1;
      digitalWrite(13,1);
      delay(3000);
    }
    else{
      state=0;
      digitalWrite(13,0);
      delay(3000);
    }
  }
}