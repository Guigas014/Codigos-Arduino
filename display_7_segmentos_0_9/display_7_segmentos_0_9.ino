//int a = 3, b = 4, c = 5, d = 6, e = 7, f = 8, g = 9;

int a = 12, b = 13, c = 9, d = 8, e = 7, f = 11, g = 10;


int num[10][7] = {
  {a, b, c, d, e, f},		  //Zero
  {b, c},				      	  //Um
  {a, b, e, d, g},			  //Dois
  {a, b, c, d, g}, 			  //Três
  {b, c, f, g},			  	  //Quatro
  {a, c, d, f, g},			  //Cinco
  {a, c, d, e, f, g},		  //Seis
  {a, b, c},			    	  //Sete
  {a, b, c, d, e, f, g},	//Oito
  {a, b, c, f, g}			    //Nove
};

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
  for (int i=0; i<10; i++){
  	apaga();
    numero(i);
    delay(1000);
  }
}  

  
  void apaga() {
  	digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  
  void numero(int n){
    for (int i=0; i<7; i++){
      digitalWrite(num[n][i], LOW);
    }
  }
  	
