void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 0);
  //delay(1000); // Wait for 1000 millisecond(s)
  
}