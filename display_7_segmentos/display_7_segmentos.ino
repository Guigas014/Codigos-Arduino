/*Tipos de dados: void, boolean, char,
byte, int, word, long, short, float, double,
string, array (vetor ou matriz);

Ex.: byte x = B1100; 12 em binário
	 int vetor =[8]; (Array)
     int matriz[3][3]; (Array)
     
Qualificadores de variáveis:

static - só é alterada na sua função;
volatile - pode ser alterada em todo o programa;
const - não poe ser alterada em nenhum momento;*/


void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000); 
  digitalWrite(2, LOW);
  delay(1000);
}