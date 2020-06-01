//Projeto 7.1 - Troque a cor das luzes

int ledRed = 9;      //pino LED Vermelho
int ledGreen = 6;    //pino LED Verde
int ledBlue = 5;     //pino LED Azul
int pot = A0;

int valorPot;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  apagaLed();

  analogWrite(ledRed, 0);
  analogWrite(ledGreen, 255);
  analogWrite(ledBlue, 255);
}

void loop() {
  valorPot = analogRead(pot);     //lê o valor do potenciômetro (de 0 a 1023)

  if (valorPot <= 128) { analogWrite(ledRed, 64); analogWrite(ledGreen, 192); }
  if (valorPot > 128 && valorPot <= 256)  { analogWrite(ledRed, 128); analogWrite(ledGreen, 128); }
  if (valorPot > 256 && valorPot <= 512)  { analogWrite(ledRed, 192); analogWrite(ledGreen, 64); }
  if (valorPot > 512 && valorPot <= 1023) { analogWrite(ledRed, 255); analogWrite(ledGreen, 0); }
  
}

  

//Função que apaga p LED.
void apagaLed() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH);  
}
