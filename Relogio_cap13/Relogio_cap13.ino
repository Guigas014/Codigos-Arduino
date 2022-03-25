// Relógio
int seg=0, min=0, hor=0;


void setup() {
  Serial.begin(1200);  

}

void loop() {
  // Variável utilizada para a contagem do tempo.
  static unsigned long ult_tempo = 0;

  // Contador (Função millis).
  int tempo = millis();

  // Marca os segundos
  if (tempo - ult_tempo >= 1000) {
    ult_tempo = tempo;
    seg++;
    showTime();
  }

  // Marca os minutos
  if (seg >= 60) {
    seg = 0;
    min++;
  }

  // Marca as horas
  if (min >= 60) {
    min = 0;
    hor++;
  }

  // Teste se acabou o dia e zera o relógio.
  if (hor >= 24) {
    hor = 0;
    min = 0;
  }
    
}

// Mostra na tela Serial da IDE as horas.
void showTime() {
  Serial.print(" ");
  Serial.print(hor);
  Serial.print(":");
  Serial.print(min);
  Serial.print(":");
  Serial.print(seg);
  Serial.print(" ");

  Serial.println(" ");  
}
