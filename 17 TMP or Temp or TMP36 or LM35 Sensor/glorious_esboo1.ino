void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  //For taking input and printing output directly
  /*float a = analogRead(A0);
  Serial.println(a);*/
  
  //For taking input and printing output efficiently
  //According to TMP Sensor value in degree celsius
  float value = analogRead(A0)*0.004882814;
  value = (value-0.5)*100.0;
  Serial.println(value);
  
  //LED on-off based on value from TMP Sensor
  if(value>50)
  {
    digitalWrite(11,1);
    delay(500);
    digitalWrite(11,0);
    delay(500);
  }
  
  //LED Brightness According to Sensor Input
  /*int bright = map(value,-40,125,0,255);
  analogWrite(11,bright);
  Serial.println(bright);*/
}