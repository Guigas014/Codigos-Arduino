//Projeto 9 - Conntrolando o motor

// Chama a biblioteca do servo motor.
#include<Servo.h>

Servo meuServo;   //Variável do servo.
int pinoPot = A0;    
int valorPot;

void setup() {
  meuServo.attach(9);
}

void loop() {
  valorPot = analogRead(pinoPot);

  //Mapeia os valores do potenciometro (entre 0 e 1023) para os valores do servo (entre 0 e 180)
  valorPot = map(valorPot, 0, 1023, 0, 255);
  //valorPot = map(valorPot, 0, 1023, 45, 135);
  
  meuServo.write(valorPot);   //Manda o valor para o servo
  delay(15);

}
