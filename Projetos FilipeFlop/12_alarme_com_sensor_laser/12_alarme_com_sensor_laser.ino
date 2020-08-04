// Projeto 11 - Alarme com sensor a laser

int pinoSensor = A0;
int pinoBuzzer = 6;
int valorLuz = 0;

void setup() {
  // configura o pino do buzzer como saída
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  valorLuz = analogRead(pinoSensor);

  if (valorLuz < 950) {
    tone(pinoBuzzer, 440);
  }
  else {
    noTone(pinoBuzzer);
  }
  
  delay(10);
}
