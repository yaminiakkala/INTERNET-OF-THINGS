
int array[10][7]={
  
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,0,1,0,0}};
  int s[]={2,3,4,5,6,7,8};
void setup()
{
  for(int i=0;i<7;i++)
  {
  pinMode(s[i],OUTPUT);
  }
}  
  void loop()
  {
    for(int count=0;count<10;count++)
    {
      for(int j=0;j<7;j++)
      {
        digitalWrite(s[j],array[count][j]);
      }
      delay(3000);
    }
  }
 

