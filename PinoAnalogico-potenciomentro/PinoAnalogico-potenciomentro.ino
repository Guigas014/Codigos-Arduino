void setup() {  
  Serial.begin(2400);

}

void loop() {
  Serial.println(analogRead(A0));
  delay(100);

}
