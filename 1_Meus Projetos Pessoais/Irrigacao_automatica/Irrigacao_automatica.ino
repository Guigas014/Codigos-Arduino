//Projeto Irrigação automática

int botao = 5;
int ledGreen = 4;
int ledRed = 3;
int rele = 7;

bool estadoLedRed = 1;
bool estadoLedGreen = 0;
bool estadoRele = 1;

//Segundos, Minuto, Horas
long umSeg = 1000;
long umMin = 60 * umSeg;
long umaHora = 60 * umMin;


void setup() {
  Serial.begin(1200);
  
  pinMode(botao, INPUT_PULLUP);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(rele, OUTPUT);

  //Valores iniciais
  digitalWrite(rele, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);

}

void loop() {

  // Contador (Função millis).
  unsigned long tempo = millis();

  //transforma o tempo para segundos
  long segundosTotal = 0;
  segundosTotal = tempo/1000;


  //Intervalos desejado
  long timeON = umMin * 28;
  long timeOFF = umMin * 2;
  long timeON2 = umMin * 28;
  long timeOFF2 = umMin * 2;


// Nesse caso o estado do motor e dos leds são alterados apenas no segundo especificado.
    Serial.println("Começou!!");
    mostraTempo(segundosTotal);
    
    //Liga
    delay(timeON);
    changeState();
    Serial.println("Ligou!");

    //Desliga
    delay(timeOFF);
    changeState();
    Serial.println("Desligou!");

    //Liga
    delay(timeON2);
    changeState();
    Serial.println("Ligou!");

    //Desliga
    delay(timeOFF2);
    changeState();
    Serial.println("Desligou!");
    


  //Função do botão
  if (digitalRead(botao) == LOW) {
    desliga();
    
    while (digitalRead(botao) == LOW);
    delay(100);  
  }

  
}


void mostraTempo(long seg) {
  long horas = seg / 3600;
  long minutos = seg / 60;
  long segundos = seg % 60;
  
  Serial.print(" ");
  Serial.print(seg / 3600);
  Serial.print(":");
  //Serial.print(seg / 60);
  Serial.print(minutos);
  Serial.print(":");
  //Serial.print(seg%60);
  Serial.print(segundos);

  Serial.println(" ");
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
