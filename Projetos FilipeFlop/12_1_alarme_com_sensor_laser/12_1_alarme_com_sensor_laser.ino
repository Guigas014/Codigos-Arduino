// Projeto 11 - Alarme com sensor a laser

int pinoSensor = A0;
int pinoBuzzer = 6;
int pinoButton = 7;
int valorLuz = 0;
int testButton = 1;

void setup() {
  // configura o pino do buzzer como saída
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoButton, INPUT_PULLUP);
}

void loop() {
  valorLuz = analogRead(pinoSensor);

  if (valorLuz < 950) {
    buzzer();
  }
  else {
    noTone(pinoBuzzer);
    testButton = 1;
  }
  
  delay(10);
}



//Função do buzzer
void buzzer() {
  while (testButton == 1) {
    tone(pinoBuzzer, 440);
    delay(200);
    noTone(pinoBuzzer);
    delay(100);
    tone(pinoBuzzer, 494);
    delay(200);
    noTone(pinoBuzzer);
    delay(100);

    botaoTeste();
  }
}

//Função do botão
int botaoTeste() {

  //Apertei para começar (nesse caso para o alarme)
  if (digitalRead(pinoButton) == LOW and testButton == 1) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 0;
    
    return testButton; 
  }

  //Apertei para parar.
  if (digitalRead(pinoButton) == LOW and testButton == 0) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 1;

    return testButton; 
  }
}
