// Projeto 15 - Dado eletrônico

int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;

int pinoTilt = 5;

void setup() {
  pinMode(segE, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segA, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  pinMode(pinoTilt, INPUT);
}

void loop() {
  if (digitalRead(pinoTilt) == HIGH) {
    jogaDado();
  }
}


void jogaDado() {
  //Mostra 24 números
  for (int i=0; i<25; i++) {
    //Escolhe um numero aleatorio entre 0 e 9
    switch (random(0, 9)) {
      case 0:
        acende0();
        break;
      case 1:
        acende1();
        break;
      case 2:
        acende2();
        break;
      case 3:
        acende3();
        break;
      case 4:
        acende4();
        break;
      case 5:
        acende5();
        break;
      case 6:
        acende6();
        break;
      case 7:
        acende7();
        break;
      case 8:
        acende8();
        break;
      case 9:
        acende9();
        break;
      default:
        apaga();
        break;
    }
    delay(4*i); // O delay aumenta conforme passam mais numeros
  }
}


void acende0() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);  
}
void acende1() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);  
}
void acende2() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);  
}
void acende3() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
}
void acende4() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void acende5() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void acende6() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void acende7() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}
void acende8() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void acende9() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void apaga() {
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}
