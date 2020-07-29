// Projeto 11 - Dó Ré Mi

// Define a frequência das notas.
#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494
#define C8 523
#define P 0

// Define os pinos.
int pinoBuzzer = 6;
int pinoButton = 7;

// Define o vetor com a sequência de notas a ser tocadas.
int melodia[] = {C, D, E, F, G, A, B, C8};

//Define um incremento.
int inc = 0;
int testButton = 1;


void setup() {
  pinMode(pinoBuzzer, OUTPUT);    //Configura o pino do buzzer como saída.
  pinMode(pinoButton, INPUT_PULLUP);
}

void loop() {
  if (testButton == 0) {
//    if (inc < 8) {
//      tone(pinoBuzzer, melodia[inc]);
//      delay(500);
//      inc++;
//    }
//    else {
//     inc = 0;
//    }
//  escalaDeC();
//  musica01();
  caicaiBalao();
//  alecrimDourado();
  }
  else {
    noTone(pinoBuzzer);
    testButton = 1;
  }
  
  botaoTeste();

//  if (digitalRead(pinoButton) == LOW and testButton == 1) {
//    while (digitalRead(pinoButton) == LOW);
//    delay(100);
//    testButton = 0;
//  }
//  if (digitalRead(pinoButton) == LOW and testButton == 0) {
//    while (digitalRead(pinoButton) == LOW);
//    delay(100);
//    testButton = 1;
//  }

}

//-----------------------------------------------------------------
int botaoTeste() {
  
  if (digitalRead(pinoButton) == LOW and testButton == 1) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 0;
    
    return testButton; 
  }
  if (digitalRead(pinoButton) == LOW and testButton == 0) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 1;

    return testButton; 
  }
}
//-----------------------------------------------------------------
// Modo mais simples de tocar as notas. (FUNÇÃO)
void escalaDeC() {
     if (inc < 8) {
      tone(pinoBuzzer, melodia[inc]);
      delay(500);
      inc++;
    }
    else {
     inc = 0;
   }
}
//-----------------------------------------------------------------
//Música 1
void musica01() {
  
 //Define o vetor da musica e o vetor do tempo.
  int ode[] = {
    E,E,F,G,G,F,E,D,C,C,D,E,E,D,P,D,P,
    E,E,F,G,G,F,E,D,C,C,D,E,D,C,P,C,P,
    D,D,E,C,D,E,P,F,E,C,D,E,P,F,E,D,C,D,P,
    E,E,D,G,G,F,E,D,C,C,D,E,D,C,P,C
  };
  
  int tempo[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,.5,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,.5,1,1,
    1,1,1,1,1,1,.5,1,1,1,1,1,.5,1,1.5,1,.5,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1.5,.125,1,1
  };
  
  for (int i = 0; i<sizeof(ode)/2; i++) {
    if (ode[i] != 0) {
      tone(pinoBuzzer, ode[i]);
    }
    else {
      noTone(pinoBuzzer);
    }
    delay(tempo[i]*500);
    noTone(pinoBuzzer);
  }
  
   noTone(pinoBuzzer);
   testButton = 1;
   delay(10000);
}
//-------------------------------------------------------------
void caicaiBalao() {
  //Define o vetor da musica e o vetor do tempo.
  int ode[] = {
    P,G,G,F,E,G,G,F,E,
    G,A,G,F,E,D,D,P,
    D,E,F,D,E,F,D,E,F,
    G,A,G,F,E,D,C
  };
  
  int tempo[] = {
    1,1.5,1.5,1,1,1.5,1.5,1,1,
    1,1,1,1,1,1.5,1,1,
    1,1,1,1,1,1,1,1,1.5,
    1,1,1,1,1,1,1.5
  };
  
  for (int i = 0; i<sizeof(ode)/2; i++) {
    if (ode[i] != 0) {
      tone(pinoBuzzer, ode[i]);
    }
    else {
      noTone(pinoBuzzer);
    }
    delay(tempo[i]*500);
    noTone(pinoBuzzer);
  }
  
   noTone(pinoBuzzer);
   testButton = 1;
   delay(10000);
  
}
//-------------------------------------------------------------
void alecrimDourado() {
  int ode[] = {
    P,G,F,E,E,D,E,G,F,F,F,E,F,G,F,F,F,E,F,G,E,E,
    G,F,E,E,D,E,G,F,F,F,E,F,G,F,F,F,E,F,G,E,E,P,
    C,D,C,F,F,E,D,F,E,E,D,C,E,F,F,F,A,G,F,E,E,P,
    C,D,C,F,F,E,D,F,E,E,D,C,E,F,F,F,A,G,F,E,G,F,E  
  };
  
  int tempo[] = {
    1,2,1,1,.250,.5,.5,1,1,.5,.5,.5,1,1,.5,.5,.5,1,1,2,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    .5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    .5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,1,2  
  };
  
  for (int i = 0; i<sizeof(ode)/2; i++) {
    if (ode[i] != 0) {
      tone(pinoBuzzer, ode[i]);
    }
    else {
      noTone(pinoBuzzer);
    }
    delay(tempo[i]*500);
    noTone(pinoBuzzer);
  }
  
   noTone(pinoBuzzer);
   testButton = 1;
   delay(10000);
}


//-------------------------------------------------------------
// Modo do site FILIPEFLOP de tocar as notas.
//  for (int i = 0; i < 8; i++) {
//    tone(pinoBuzzer, melodia[i]);
//    delay(500); 
//  }
