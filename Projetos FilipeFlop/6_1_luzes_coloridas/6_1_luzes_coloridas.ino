//Projeto 6.1 - Luzes Coloridas

int ledRed = 7;      //pino LED Vermelho
int ledGreen = 6;    //pino LED Verde
int ledBlue = 5;     //pino LED Azul

int botao = 3;       //mudar o pino do botão para um pwm

int posicao = 0;


byte funcoes[8][3] = {
  {LOW, HIGH, HIGH},     //acendeVermelho
  {HIGH, LOW, HIGH},     //acendeVerde
  {HIGH, HIGH, LOW},     //acendeAzul
  {LOW, HIGH, LOW},      //acendeMargenta
  {LOW, LOW, HIGH},      //acendeAmarelo
  {HIGH, LOW, LOW},      //acendeCiano
  {LOW, LOW, LOW},       //acendeBranco
  {HIGH, HIGH, HIGH},    //apagaLed
  
};

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  pinMode(botao, INPUT_PULLUP);
  apagaLed();
}

void loop() {

  if (digitalRead(botao) == LOW) {

    digitalWrite(ledRed, funcoes[posicao][0]);
    digitalWrite(ledGreen, funcoes[posicao][1]);
    digitalWrite(ledBlue, funcoes[posicao][2]);

    if (posicao == 7) {
      posicao = 0;
    } else {
      posicao++;  
    }
    
    while (digitalRead(botao) == LOW);
    delay(100);
  }
  
}
  

//Função que apaga os LEDs.
void apagaLed() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH);  
}
