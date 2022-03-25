// Cronômetro
//int seg = 0, min = 0, hor = 0;

int arrayTempo[3] = {0, 0, 0};

// Só para entender o array:
// arrayTempo[0] = seg
// arrayTempo[1] = min
// arrayTempo[2] = hor

boolean timeReady = false;

// Botões
int mais = 2;
int menos = 3;
int start = 4;
int change = 5;

void setup() {
  Serial.begin(1200);

  pinMode(mais, INPUT_PULLUP);
  pinMode(menos, INPUT_PULLUP);
  pinMode(start, INPUT_PULLUP);
  pinMode(change, INPUT_PULLUP);

}

void loop() {
  // Variável utilizada para a contagem do tempo.
  static unsigned long ult_tempo = 0;


  // Parte dos botões.
  delay(300);
  //Chama a função que ajusta o cronômetro.
  if (digitalRead(change) == LOW) {
    showTime();
    setTimerMode();
    //Serial.println("OK!");
  }



  // Contador (Função millis).
  int tempo = millis();

  if (timeReady == true) {
    
    // Marca os segundos
    if (tempo - ult_tempo >= 1000) {
      ult_tempo = tempo;
      arrayTempo[0]--;
      showTime();
    }

    // Marca os minutos
    if (arrayTempo[0] == 0 && arrayTempo[1] > 0) {
      arrayTempo[0] = 60;
      arrayTempo[1]--;
    }

    // Marca as horas
    if (arrayTempo[1] == 0 && arrayTempo[2] > 0) {
      arrayTempo[1] = 60;
      arrayTempo[2]--;
    }

    // Teste se o cronômentro zerou.
    if (arrayTempo[2] == 0 && arrayTempo[1] == 0 && arrayTempo[0] == 0) {
      arrayTempo[2] = 0;
      arrayTempo[1] = 0;
      arrayTempo[0] = 0;
      timeReady = false;
      Serial.println("FIM!!");
    }
  }

}



// Seleciona qual modo mudar no cronômetro.
void setTimerMode() {
  int modo = 0;
  int minValue = 0;
  int maxValue = 59;

  while (digitalRead(start) == HIGH) {
    switch (modo) {
      case 0:
        //modoRef = "segundos";
        setValue(modo, minValue, maxValue);
        break;
      case 1:
        //modoRef = "minutos";
        setValue(modo, minValue, maxValue);
        break;
      case 2:
        //modoRef = "horas";
        setValue(modo, minValue, maxValue = 23);
        break;
      default: {
          Serial.println("Opção inválida!!");
          break;
        }
    }

    //Muda o modo
    delay(100);
    if (digitalRead(change) == LOW && modo == 2) {
      modo = 0;
      Serial.println("segundos");
    }
    delay(100);
    if (digitalRead(change) == LOW && modo == 1) {
      modo++;
      Serial.println("horas");
    }
    delay(100);
    if (digitalRead(change) == LOW && modo == 0) {
      modo++;
      Serial.println("minutos");
    }

  }

  //Corrigi a falta do segundo inicial.
  arrayTempo[0]++;
  
  Serial.println("START");
  timeReady = true;

}

// Muda os valores do cronômetro.
void setValue(int modo, int minValue, int maxValue) {
  delay(600);


  if (digitalRead(mais) == LOW && minValue <= arrayTempo[modo] <= maxValue) {
    arrayTempo[modo]++;
    showTime();
  }
  if (digitalRead(menos) == LOW && minValue <= arrayTempo[modo] <= maxValue) {
    arrayTempo[modo]--;
    if (arrayTempo[modo] <= 0) {
      arrayTempo[modo] = 0;
    }
    showTime();
  }

}


// Mostra na tela Serial da IDE as horas.
void showTime() {
  Serial.print(" ");
  Serial.print(arrayTempo[2]);
  Serial.print(":");
  Serial.print(arrayTempo[1]);
  Serial.print(":");
  Serial.print(arrayTempo[0]);
  Serial.print(" ");

  Serial.println(" ");
}
