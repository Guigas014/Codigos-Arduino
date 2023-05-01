//Projeto Irrigação automática

int botao = 5;
int ledGreen = 4;
int ledRed = 3;
int rele = 7;

bool estadoLedRed = 0;
bool estadoLedGreen = 1;
bool estadoRele = 0;


void setup() {
  Serial.begin(1200);
  
  pinMode(botao, INPUT_PULLUP);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(rele, OUTPUT);

  digitalWrite(rele, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);

}

void loop() {

  // Contador (Função millis).
  unsigned long tempo = millis();

  //Imprimi o tempo em segundos
  long segundos = 0;
  segundos = tempo/1000;
//  Serial.println(segundos);

  //Segundos, Minuto, Horas e Intervalo desejado
  long umSeg = 1000;
  long umMin = 60 * umSeg;
  long umaHora = 60 * umMin;

  long timeON = umMin;
  long timeOFF = umMin * 2;

// Nesse caso o estado do motor e dos leds são alterados todos os segundos.
//  if (tempo >= timeON && tempo <= timeOFF) {
//    digitalWrite(rele, LOW);
//    digitalWrite(ledRed, LOW);
//    digitalWrite(ledGreen, HIGH);
//
//    
//  }
//  else {
//    digitalWrite(rele, HIGH);
//    digitalWrite(ledRed, HIGH);
//    digitalWrite(ledGreen, LOW);
//  }


// Nesse caso o estado do motor e dos leds são alterados apenas no segundo especificado.
    delay(umMin * 2);
    
    changeState();
    Serial.println(segundos);
    
    delay(umMin);
    
    changeState();
    Serial.println(segundos);


  


  //Função do botão
  if (digitalRead(botao) == LOW) {
    digitalWrite(rele, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
    
    while (digitalRead(botao) == LOW);
    delay(100);  
  }

  
}


void changeState() {
  estadoRele = !estadoRele;
  digitalWrite(rele, estadoRele);

  estadoLedRed = !estadoLedRed;
  digitalWrite(ledRed, estadoLedRed);
    
  estadoLedGreen = !estadoLedGreen;
  digitalWrite(ledGreen, estadoLedGreen);
}
