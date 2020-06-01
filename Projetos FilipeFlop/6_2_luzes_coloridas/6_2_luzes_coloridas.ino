//Projeto 6 - Luzes Coloridas

int ledRed = 9;      //pino LED Vermelho
int ledGreen = 6;    //pino LED Verde
int ledBlue = 5;     //pino LED Azul

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  analogWrite(ledRed, 0);
  analogWrite(ledGreen, 255);
  analogWrite(ledBlue, 255);
  
  //apagaLed();
}

void loop() {
  acendeBrilho(15);
  apagaBrilho(15); 
 
}


void acendeBrilho(int incremento) {
  for (byte value=0; value<255; value+=incremento) {
    //controla o brilho do LED
    analogWrite(ledRed, value);
    analogWrite(ledBlue, (255 - value));
    delay(600);
  }  
}

void apagaBrilho(int decremento) {
  for (byte value=255; value>0; value-=decremento) {
    //controla o brilho do LED
    analogWrite(ledRed, value);
    analogWrite(ledBlue, (255 - value));
    delay(600);
  }  
}

//Função que apaga p LED.
void apagaLed() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH);  
}
