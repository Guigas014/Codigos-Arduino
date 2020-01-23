int cont = 0;

void setup()
{ 
  //Sinal 1:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  //Sinal 2:
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  
  //Sinal 1 Pedestre:
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  //Sinal 2 Pedestre:
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop()
{
  //Estado inicial dos sinais.
  digitalWrite(13, HIGH);		//sinal 1 fechado.
  digitalWrite(9, LOW);			//sinal 1 P. não fechado.
  digitalWrite(3, HIGH);		//sinal 2 fechado.
  digitalWrite(5, LOW);			//sinal 2 P. não fechado.
  delay(500);
  
  //Sinal 1 e 2 pedestre abertos.
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  
  //Pisca do Sinal 1 e 2 pedestre.
  while (cont < 10) {
  	digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    delay(80);
    digitalWrite(9, LOW);
    digitalWrite(5, LOW);
    delay(80);
    cont++;
  }
  
  //Sinal 1 e 2 pedestre fechados.
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  cont = 0;
  
  //Sinal 1 aberto.
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  
  //Sinal 2 aberto e sinal 1 fechado.
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(800);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(3, LOW);
  digitalWrite(1, HIGH);
  delay(2000);
  
  //Sinal 2 fechado.
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(800);
  digitalWrite(2, LOW);
  
}
