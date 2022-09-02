//Função Random
long num = 0;
int botao =7;
int press = 0;
bool state = 0;


void setup() {
  pinMode(botao, INPUT);
  Serial.begin(1200);
  randomSeed(1000);
}

void loop() {
  
  delay(500);

  if (digitalRead(botao) == LOW) {
//    state = !state;
    num = random(300);
    Serial.println(num);
    while (digitalRead(botao) == LOW);
//    delay(100);
  }



}
