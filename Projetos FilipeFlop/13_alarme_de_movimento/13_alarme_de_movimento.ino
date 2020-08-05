// Projeto 13 - Alarme de Movimento

int pinoTilt = 4;
int pinoBuzzer = 6;

void setup() {
  pinMode(pinoTilt, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  
  if (digitalRead(pinoTilt) == HIGH) {
    tone(pinoBuzzer, 440);
    delay(1000);
  }
  else {
    noTone(pinoBuzzer); 
  }
}
