// Projeto 14 - Contador Digital

int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;


void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

}

void loop() {
  for (int inc = 9; inc>= 0; inc--) {
    acendendo(inc);
    delay(1000);
  }
}


void acendendo(int op) {
//  int op = inc;
  switch (op) {
    case 0: 
      digitalWrite(segE, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      break;
    case 1: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH); 
      break;
    case 2: 
      digitalWrite(segE, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      break; 
    case 3: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      break; 
    case 4: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break; 
    case 5: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segA, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break; 
    case 6: 
      digitalWrite(segE, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segA, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break; 
    case 7: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break; 
    case 8: 
      digitalWrite(segE, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break; 
    case 9: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segA, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;
    default: 
      digitalWrite(segE, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segA, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;
  }
}
