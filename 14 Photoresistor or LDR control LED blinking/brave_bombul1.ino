int state = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
  if(a<400){
    if(state==0){
      state=1;
      digitalWrite(13,1);
      delay(500);      
    }
    else{
      state=0;
      digitalWrite(13,0);
      delay(500); 
    }
  }
  else{
    analogWrite(13,a);
  }
}