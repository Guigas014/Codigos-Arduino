//Projeto 6 - Luzes Coloridas

int ledRed = 7;      //pino LED Vermelho
int ledGreen = 6;    //pino LED Verde
int ledAzul = 5;     //pino LED Azul

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  //apagaLed();
}

void loop() {
  acendeVermelho();
  delay(1000);
  acendeVerde();
  delay(1000);
  acendeAzul();
  delay(1000);
  acendeMargenta();
  delay(1000);
  acendeAmarelo();
  delay(1000);
  acendeCiano();
  delay(1000);
  acendeBranco();
  delay(1000);
  apagaLed();
  delay(1000);
}

//Funções que acendem uma cor e apaga as outras.
void acendeVermelho() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledAzul, HIGH);  
}

void acendeVerde() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledAzul, HIGH);  
}

void acendeAzul() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledAzul, LOW);  
}

void acendeMargenta() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledAzul, LOW);  
}

void acendeAmarelo() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledAzul, HIGH);  
}

void acendeCiano() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledAzul, LOW);  
}

void acendeBranco() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledAzul, LOW);  
}
  

//Função que apaga p LED.
void apagaLed() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledAzul, HIGH);  
}
