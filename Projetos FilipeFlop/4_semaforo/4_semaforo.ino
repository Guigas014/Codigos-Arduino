// Projeto 4 - Semáforo

//Define os pinos a serem utilizados
int pedVerde = 4;
int pedVermelho = 5;
int carroVerde = 1;
int carroAmarelo = 2;
int carroVermelho = 3;

void setup() {
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);

  //  Coloca na posição inicial. Somente o verde dos carros e o vermelho dos pedestres acesos.
//  pinMode(carroVerde, HIGH);  ????
//  pinMode(carroAmarelo, LOW); ????
//  pinMode(carroVermelho, LOW);????
//  pinMode(pedVerde, LOW);     ????
//  pinMode(pedVermelho, HIGH); ????
}

void loop() {
  //  Acende o verde dos carros e o vermelho dos pedestres
  digitalWrite(carroVerde, HIGH);
  digitalWrite(pedVermelho, HIGH);
  delay(5000);

  //  Apaga o verde dos carros e acende o amarelo
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  delay(3000);

  //  Apaga o amarelo dos carros e acende o vermelho
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);

  //  Apaga o vermelho dos pedestres e acende o verde
  digitalWrite(pedVerde, HIGH);
  digitalWrite(pedVermelho, LOW);
  delay(5000);

  //  Apaga o verde do pedeste e pisca o vermelho dos pedestres
  digitalWrite(pedVerde, LOW);

  for (int x = 0; x < 5; x++) {
    digitalWrite(pedVermelho, HIGH);
    delay(500);
    digitalWrite(pedVermelho, LOW);
    delay(500);
  }

  //  Apaga o vermelho dos carros
  digitalWrite(carroVermelho, LOW);

}
