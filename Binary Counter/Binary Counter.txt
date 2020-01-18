int rr[16][4]=
{
  {0,0,0,0},
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1},
  {0,1,0,0},
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1},
  {1,0,1,0},
  {1,0,1,1},
  {1,1,0,0},
  {1,1,0,1},
  {1,1,1,0},
  {1,1,1,1},
};

void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  for (int i=0; i<16; i++)
  {
    for (int j=0; j<4; j++)
    {
      digitalWrite(8+j,rr[i][j]);
    }
    delay(2000);
  }
}