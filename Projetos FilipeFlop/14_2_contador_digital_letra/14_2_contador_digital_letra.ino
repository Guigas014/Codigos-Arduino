// Projeto 14 - Contador Digital

int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;

int pinoButton = 5;
int testButton = 1;


void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  pinMode(pinoButton, INPUT_PULLUP);
}

void loop() {
  botaoTeste();
  
  if (testButton == 0) {
    acendendo();
    testButton = 1;
  }
}


void acendendo() {
    
  acendeA();
  delay(1000);
  acendeB();
  delay(1000);
  acendeC();
  delay(1000);
  acendeD();
  delay(1000);
  acendeE();
  delay(1000);
  acendeF();
  delay(1000); 
  acendeG();
  delay(1000);    
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

void acendeG() {
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}



//Função do botão
int botaoTeste() {

  //Apertei para começar (nesse caso para o alarme)
  if (digitalRead(pinoButton) == LOW and testButton == 1) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 0;
    
    return testButton; 
  }

  //Apertei para parar.
  if (digitalRead(pinoButton) == LOW and testButton == 0) {
    while (digitalRead(pinoButton) == LOW);
    delay(100);
    testButton = 1;

    return testButton; 
  }
}
