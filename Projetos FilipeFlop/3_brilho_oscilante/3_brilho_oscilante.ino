//Projeto 3 - Brilho do LED

//Configura a saída 11 como pino do LED
int pinoLed = 11;

void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  acendeBrilho(15);
  apagaBrilho(15);
}

void acendeBrilho(int incremento) {
  for (byte value=0; value<255; value+=incremento) {
    //controla o brilho do LED
    analogWrite(pinoLed, value);
    delay(300);
  }  
}

void apagaBrilho(int decremento) {
  for (byte value=255; value>0; value-=decremento) {
    //controla o brilho do LED
    analogWrite(pinoLed, value);
    delay(300);
  }  
}
