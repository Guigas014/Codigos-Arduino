//Controla o display de 7 segmentos via pc.
int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;

int recebido = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
}

void loop() {
  //Lê a entrada do pc e salva na variável "recebido".
  if (Serial.available() > 0) {
    recebido = Serial.read();
    acendendo(recebido);
    delay(1000);
  } 
}


void acendendo(int op) {
  if (op == '0') {
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
  }
  if (op == '1') {
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH); 
  }
  if (op == '2') {
     digitalWrite(segE, LOW);
     digitalWrite(segD, LOW);
     digitalWrite(segC, HIGH);
     digitalWrite(segB, LOW);
     digitalWrite(segA, LOW);
     digitalWrite(segF, HIGH);
     digitalWrite(segG, LOW);
  }
  if (op == '3') {
    digitalWrite(segE, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
  }
  if (op == '4') {
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  }
  if (op == '5') {
    digitalWrite(segE, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  }
  if (op == '6') {
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  }
  if (op == '7') {
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  if (op == '8') {
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  }
  if (op == '9') {
     digitalWrite(segE, HIGH);
     digitalWrite(segD, LOW);
     digitalWrite(segC, LOW);
     digitalWrite(segB, LOW);
     digitalWrite(segA, LOW);
     digitalWrite(segF, LOW);
     digitalWrite(segG, LOW);
  }    
   
}



  
