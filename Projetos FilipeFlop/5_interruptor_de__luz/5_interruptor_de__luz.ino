//Projeto 5 - Interruptor de luz

int botao = 7;
int led = 13;
bool estadoLed = 0;

void setup() {
  pinMode(botao, INPUT_PULLUP);   //define o pino do botão como entrada "input"
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(botao) == LOW) {
    estadoLed = !estadoLed;   //troca o estado do LED
    digitalWrite(led, estadoLed);
    while (digitalRead(botao) == LOW);
    delay(100);
  }

}
