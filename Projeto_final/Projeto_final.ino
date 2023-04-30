//Projeto final da apostila

int botao = 5;
int ledGreen = 4;
int ledRed = 3;
int rele = 7;

bool estadoLedRed = 0;
bool estadoLedGreen = 1;
bool estadoRele = 0;


void setup() {
  pinMode(botao, INPUT_PULLUP);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(rele, OUTPUT);

  digitalWrite(rele, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);

}

void loop() {
    
  if (digitalRead(botao) == LOW) {
//    digitalWrite(rele, LOW);
//
//    digitalWrite(ledRed, LOW);
//    digitalWrite(ledGreen, HIGH);

    estadoRele = !estadoRele;
    digitalWrite(rele, estadoRele);

    estadoLedRed = !estadoLedRed;
    digitalWrite(ledRed, estadoLedRed);
    
    estadoLedGreen = !estadoLedGreen;
    digitalWrite(ledGreen, estadoLedGreen);
  
    while (digitalRead(botao) == LOW);
    delay(100);  
  }
//  else {
//    digitalWrite(rele, HIGH);
//
//    digitalWrite(ledRed, HIGH);
//    digitalWrite(ledGreen, LOW);
//  }
}
