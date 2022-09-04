//Controla _3_led_pela_serial
int recebido = 0;
int dois = HIGH;
int tres = HIGH;
int quatro = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, dois);
  digitalWrite(3, tres);
  digitalWrite(4, quatro);
}

void loop() {
  if (Serial.available() > 0) {
    recebido = Serial.read();

     if (recebido == '2') {
      if (dois == HIGH) dois = LOW;
      else dois = HIGH;
      digitalWrite(2, dois);
     }

     if (recebido == '3') {
      if (tres == HIGH) tres = LOW;
      else tres = HIGH;
      digitalWrite(3, tres);
     }

     if (recebido == '4') {
      if (quatro == HIGH) quatro = LOW;
      else quatro = HIGH;
      digitalWrite(4, quatro);
     }
  }
}
