int cont = 0;

void setup()
{ 
  //Sinal 1:
  pinMode(13, OUTPUT);    //Vermelho
  pinMode(12, OUTPUT);    //Amarelo
  pinMode(11, OUTPUT);    //Verde
  
  //Sinal 2:
  pinMode(3, OUTPUT);    //Vermelho
  pinMode(2, OUTPUT);    //Amarelo
  pinMode(1, OUTPUT);    //Verde
  
  //Sinal 1 Pedestre:
  pinMode(9, OUTPUT);    //Vermelho
  pinMode(8, OUTPUT);    //Verde
  
  //Sinal 2 Pedestre:
  pinMode(5, OUTPUT);   //Vermelho
  pinMode(4, OUTPUT);   //Verde
}


void loop()
{
  //Estado inicial dos sinais.
  digitalWrite(13, HIGH);		//sinal 1 fechado.
  digitalWrite(9, LOW);			//sinal 1 P. não fechado.
  digitalWrite(3, HIGH);		//sinal 2 fechado.
  digitalWrite(5, LOW);			//sinal 2 P. não fechado.
  delay(1000);
  
  //Sinal 1 e 2 pedestre abertos.
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  delay(4000);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  
  //Pisca do Sinal 1 e 2 pedestre.
  while (cont < 15) {
  	digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    delay(160);
    digitalWrite(9, LOW);
    digitalWrite(5, LOW);
    delay(160);
    cont++;
  }
  
  //Sinal 1 e 2 pedestre fechados.
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  cont = 0;
  
  //Sinal 1 aberto.
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(4000);
  
  //Sinal 2 aberto e sinal 1 fechado.
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1600);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(400);
  digitalWrite(3, LOW);
  digitalWrite(1, HIGH);
  delay(4000);
  
  //Sinal 2 fechado.
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(1600);
  digitalWrite(2, LOW);
  
}
