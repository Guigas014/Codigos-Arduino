int pinoBuzzer = 4;

void setup()
{
  pinMode(pinoBuzzer, OUTPUT);
}

void loop()
{
 //Define a frequencia das notas e a pausa.
 int C = 262, D = 294, E = 330, F = 349, G = 392, A = 440, B = 523;
 int P = 0;
 int i; 
  
 //Define o vetor da musica e o vetor do tempo.
  int ode[] = {
  	E,E,F,G,G,F,E,D,C,C,D,E,E,D,P,D,P,
    E,E,F,G,G,F,E,D,C,C,D,E,D,C,P,C,P,
    D,D,E,C,D,E,P,F,E,C,D,E,P,F,E,D,C,D,P,
    E,E,D,G,G,F,E,D,C,C,D,E,D,C,P,C
  };
  
  int tempo[] = {
  	1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,.5,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,.5,1,1,
    1,1,1,1,1,1,.5,1,1,1,1,1,.5,1,1.5,1,.5,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1.5,.125,1,1
  };
  
  for (i = 0; i<sizeof(ode)/2; i++) {
    if (ode[i] != 0) {
    	tone(pinoBuzzer, ode[i]);
    }
    else {
    	noTone(pinoBuzzer);
    }
    delay(tempo[i]*500);
    noTone(pinoBuzzer);
  }
  
   noTone(pinoBuzzer);
   delay(10000);
  
}
