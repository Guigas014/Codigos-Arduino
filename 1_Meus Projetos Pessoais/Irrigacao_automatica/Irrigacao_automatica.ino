//Projeto Irrigação automática

int botao = 5;
int ledGreen = 4;
int ledRed = 3;
int rele = 7;

bool estadoLedRed = 1;
bool estadoLedGreen = 0;
bool estadoRele = 1;


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
  long timeON2 = umMin * 5;
  long timeOFF2 = umMin * 8;


// Nesse caso o estado do motor e dos leds são alterados todos os segundos.
//  if (tempo >= timeON && tempo <= timeOFF) {
//    liga();
//
//    Serial.println(segundos);    
//  }
//  else if (tempo >= timeON2 && tempo <= timeOFF2) {
//    liga();
//
//    Serial.println(segundos);    
//  }
//  else {
//    desliga();
//
//    //Serial.println(segundos);  
//  }


// Nesse caso o estado do motor e dos leds são alterados apenas no segundo especificado.
    Serial.println("Começou!!");
    Serial.println(segundos);

    //Liga
    delay(timeON);
    changeState();
    Serial.println("Ligado após 1 min!");
    Serial.println(" ");

    //Desliga
    delay(timeOFF);
    changeState();
    Serial.println("Desligado após 2 min!");
    Serial.println(" ");

    //Liga
    delay(timeON2);
    changeState();
    Serial.println("Ligado após 5 min!");
    Serial.println(" ");

    //Desliga
    delay(timeOFF2);
    changeState();
    Serial.println("Desligado após 8 min!");
    Serial.println(" ");
    


  //Função do botão
  if (digitalRead(botao) == LOW) {
    desliga();
    
    while (digitalRead(botao) == LOW);
    delay(100);  
  }

  
}


void liga() {
  digitalWrite(rele, LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
}

void desliga() {
  digitalWrite(rele, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW); 
}

void changeState() {
  estadoRele = !estadoRele;
  digitalWrite(rele, estadoRele);

  estadoLedRed = !estadoLedRed;
  digitalWrite(ledRed, estadoLedRed);
    
  estadoLedGreen = !estadoLedGreen;
  digitalWrite(ledGreen, estadoLedGreen);
}
