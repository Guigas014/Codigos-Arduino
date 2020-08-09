// Projeto 13 - Alarme de Movimento

int pinoTilt = 4;
int pinoBuzzer = 6;

void setup() {
  pinMode(pinoTilt, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  
  if (digitalRead(pinoTilt) == HIGH) {
    alarm();
  }
  else {
    noTone(pinoBuzzer); 
  }
}

void alarm() {
  for (int i = 1; i <= 8; i++) {
    tone(pinoBuzzer, 440);
    delay(400);
    tone(pinoBuzzer, 494);
//    noTone(pinoBuzzer); 
    delay(400);
  }   
}
