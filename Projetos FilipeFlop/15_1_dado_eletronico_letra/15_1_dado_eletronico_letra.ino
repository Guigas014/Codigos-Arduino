// Projeto 15 - Dado eletrônico com letra

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
  for (int i=0; i<35; i++) {
    //Escolhe um numero aleatorio entre 0 e 5
    switch (random(0, 6)) {
      case 0:
        acendeA();
        break;
      case 1:
        acendeB();
        break;
      case 2:
        acendeC();
        break;
      case 3:
        acendeD();
        break;
      case 4:
        acendeE();
        break;
      case 5:
        acendeF();
        break;
      default:
        apaga();
        break;
    }
    delay(4*i); // O delay aumenta conforme passam mais numeros
  }
}


void acendeA() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW); 
}
void acendeB() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW); 
}
void acendeC() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
}
void acendeD() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
}
void acendeE() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void acendeF() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
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
