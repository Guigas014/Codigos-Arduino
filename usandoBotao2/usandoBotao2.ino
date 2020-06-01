int led = 13;
int botao = 7;
int press = 0;
int status = 1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);

}

void loop() {

  //Teste lógico.
  while (status == 1) {

    //Lê o botão
    press = digitalRead(botao);

    if (press == HIGH) {
      status = 0;
      press = LOW;		//Funciona sem esse LOW também.
    }
    else {
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
      delay(500);
    }
  }


  while (status == 0) {

    //Lê o botão
    press = digitalRead(botao);

    if (press == HIGH) {
      status = 1;
      press = LOW;		//Funciona sem esse LOW também.
    }
    else {
      digitalWrite(led, LOW);
    }
  }

}
