int led = 11;
int botao = 2;
int press = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);

}

void loop() {
  press = digitalRead(botao);

  if (press == HIGH){
      digitalWrite(led, HIGH);
    }
    else {
        digitalWrite(led, LOW);
      }
}
