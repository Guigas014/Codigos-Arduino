// Projeto 10 - Sensor de luz ambiente

int pinoLed = 12;
int pinoLdr = A0;
int valorLuz = 0;

void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  valorLuz = analogRead(pinoLdr);

  if (valorLuz < 400) {       // Sensibilidade do LDR => 0 a 1023.
    digitalWrite(pinoLed, HIGH);
  }
  else {
    digitalWrite(pinoLed, LOW);
  }
  delay(10);

}
