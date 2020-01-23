int led = 3;
int buzz = 9;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  analogWrite(9, 50);
  delay(500);
  digitalWrite(9, LOW);
  //delay(2000);
  
  for (int i = 0; i<255; i++){
  	analogWrite(led, i);
    delay(50);
  }
}