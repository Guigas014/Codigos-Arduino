//Projeto 8 - Acionando um motor

// Chama a biblioteca do servo motor.
#include<Servo.h>

Servo meuServo;   //Variável do servo.
int botao = 7;    //Botão no pino 7
int botao1 = 6;
int botao2 = 5;

int angulo = 0;

void setup() {
  pinMode(botao, INPUT_PULLUP);   //Define o botão como saida.
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  meuServo.attach(9);
}

void loop() {
  
  if (digitalRead(botao) == LOW) {
    meuServo.write(angulo);
    angulo++;
    delay(20);
  }

  if (digitalRead(botao1) == LOW) {
    meuServo.write(angulo);
    angulo--;
    delay(20);
  }

  if (digitalRead(botao2) == LOW) {
    angulo = 90;
    meuServo.write(angulo);
    delay(20);
  }

//  if (digitalRead(botao) == LOW) {
//    for (int angulo=0; angulo<=180; angulo++) {   //Aumenta o angulo do servo ate chegar em 180
//      meuServo.write(angulo);
//      delay(20);
//    }
//  }
//  if (digitalRead(botao1) == LOW) {
//    for (int angulo=180; angulo>=0; angulo--) {   //Diminui o angulo do servo ate chegar a 0
//      meuServo.write(angulo);
//      delay(20);
//    }
//  }
  
//  meuServo.detach();
}

//    meuServo.write(0);
//    delay(1000);
//    meuServo.write(30);
//    delay(1000);
//    meuServo.write(60);
//    delay(1000);
//    meuServo.write(90);
//    delay(1000);
//    meuServo.write(120);
//    delay(1000);
//    meuServo.write(150);
//    delay(1000);
//    meuServo.write(180);
//    delay(1000);
//    meuServo.write(0);
//    delay(1000);
