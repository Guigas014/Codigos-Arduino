//Dados via porta  serial

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write("Oi!\n");
  delay(1000);
}
