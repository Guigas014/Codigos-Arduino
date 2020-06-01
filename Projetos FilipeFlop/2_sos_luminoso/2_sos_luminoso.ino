//Projeo 2 - Sinal de SOS com LED
int pinoLed = 11;

void setup() {
  pinMode(pinoLed, OUTPUT);

}

void loop() {
  //S(...) três pontos
  for (int  x=0; x<3; x++) {
    digitalWrite(pinoLed, HIGH);
    delay(150);
    digitalWrite(pinoLed, LOW);
    delay(100);
  }

  delay(200);

  //)(---) três linhas
  for (int x=0; x<3; x++) {
    digitalWrite(pinoLed, HIGH);
    delay(450);
    digitalWrite(pinoLed, LOW);
    delay(150);
  }

  delay(200);

   //S(...) três pontos
  for (int  x=0; x<3; x++) {
    digitalWrite(pinoLed, HIGH);
    delay(150);
    digitalWrite(pinoLed, LOW);
    delay(100);
  }

  delay(5000);  
}
