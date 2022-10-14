// Piano com o teclado do pc
int recebido = 0;
int buzzer = 4;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  int C = 262, D = 294, E = 330, F = 349, G = 392, A = 440, B = 523;
  int P = 0;
  
  if (Serial.available() > 0) recebido = Serial.read();

  switch (recebido) {
    case 'c': {
      tocaNota(C);
      break;
    }
    case 'd': {
      tocaNota(D);
      break;
    }
    case 'e': {
      tocaNota(E);
      break;
    }
    case 'f': {
      tocaNota(F);
      break;
    }
    case 'g': {
      tocaNota(G);
      break;
    }
    case 'a': {
      tocaNota(A);
      break;
    }
    case 'b': {
      tocaNota(B);
      break;
    }
  }

}


void tocaNota(int nota) {
  tone(buzzer, nota);
  delay(500);
  noTone(buzzer);
}
