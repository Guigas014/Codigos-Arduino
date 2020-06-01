//Projeto 7 - Troque a cor das luzes

int ledRed = 7;      //pino LED Vermelho
int ledGreen = 6;    //pino LED Verde
int ledBlue = 5;     //pino LED Azul
int pot = A0;

int valorPot;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  apagaLed();
}

void loop() {
  valorPot = analogRead(pot);     //lê o valor do potenciômetro (de 0 a 1023)

  if (valorPot >= 0 && valorPot <= 128) { apagaLed(); }              //menor que 128 apaga o LED 
  if (valorPot > 128 && valorPot <= 256) { acendeVermelho(); }       //entre 128 e 256, acende vermelho 
  if (valorPot > 256 && valorPot <= 384) { acendeVerde(); }          //entre 256 e 384, acende verde
  if (valorPot > 384 && valorPot <= 512) { acendeAzul(); }           //entre 384 e 512, acende azul
  if (valorPot >= 512 && valorPot <= 640) { acendeMargenta(); }      //entre 512 e 640, acende margenta 
  if (valorPot > 640 && valorPot <= 768) { acendeAmarelo(); }        //entre 640 e 768, acende amarelo 
  if (valorPot > 768 && valorPot <= 896) { acendeCiano(); }          //entre 768 e 896, acende ciano
  if (valorPot > 896 && valorPot <= 1023) { acendeBranco(); }        //entre 896 e 1023, acende branco

}

//Funções que acendem uma cor e apaga as outras.
void acendeVermelho() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH);  
}

void acendeVerde() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, HIGH);  
}

void acendeAzul() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, LOW);  
}

void acendeMargenta() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, LOW);  
}

void acendeAmarelo() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, HIGH);  
}

void acendeCiano() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, LOW);  
}

void acendeBranco() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, LOW);  
}
  

//Função que apaga p LED.
void apagaLed() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH);  
}
