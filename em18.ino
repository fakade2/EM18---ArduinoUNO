char input[15]={};
void setup()
{ 
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available())
  {
    for(int i=0;i<15;i++)
      input[i]=Serial.read();

    for(int i=0;i<15;i++)
      Serial.print(input[i]);
    Serial.println();
  }
}
