//Projeto 8 - Acionando um motor

// Chama a biblioteca do servo motor.
#include<Servo.h>

Servo meuServo;   //Variável do servo.
int botao = 7;    //Botão no pino 7

void setup() {
  pinMode(botao, INPUT_PULLUP);   //Define o botão como saida.
}

void loop() {
  meuServo.attach(9);
  
  if (digitalRead(botao) == LOW) {
    for (int angulo=0; angulo<=180; angulo++) {   //Aumenta o angulo do servo ate chegar em 180
      meuServo.write(angulo);
      delay(10);
    }
    for (int angulo=180; angulo>=0; angulo--) {   //Diminui o angulo do servo ate chegar a 0
      meuServo.write(angulo);
      delay(10);
    }
  }
  meuServo.detach();
}
