int i=0;
int p=7;
void setup()
{
  for(i=0;i<8;i++)
  {
  pinMode(i, OUTPUT);
  }
  for(p=7;p>=0;p--)
  {
  pinMode(p, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
  digitalWrite(i, HIGH);
  delay(500);
  digitalWrite(i, LOW);
  delay(500); 
  }
  for(p=7;p>=0;p--)
  {
  digitalWrite(p, HIGH);
  delay(500);
  digitalWrite(p, LOW);
  delay(500); 
  }
}