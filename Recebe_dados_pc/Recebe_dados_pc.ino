//Recebe_dados_pc
int recebido = 0;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // se maior que 0 então existe dados para a leitura.
  if (Serial.available() > 0) {
    recebido = Serial.read();

    if (recebido == 'a') digitalWrite(led, HIGH);
    if (recebido == 'b') digitalWrite(led, LOW);
  }
}
