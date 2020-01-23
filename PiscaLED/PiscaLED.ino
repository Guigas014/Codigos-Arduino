// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
//int led = 13; colocar o pino 13 em uma variavel "led!.

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);     //LED_BUILTIN - faz referência a pota 13.
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
