int state=0;
void setup()
{
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(8,INPUT);
}

void loop()
{
  int a = digitalRead(8);
  Serial.println(a);
  if(a==1)
  {    if(state==0)
    {
      state=1;
      digitalWrite(10,1);
      delay(3000);   }
    else if(state==1)
    {
      state=0;
      digitalWrite(10,0);
      delay(3000);
    }
  }
}