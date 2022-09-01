//Mostra o seno, coseno e tangente de 0 a 360.
float seno = 0;
float coseno = 0;
float tangente = 0;
int angulo = 0;

  
void setup() {
  Serial.begin(1200);
  
}

void loop() {
  if (angulo <= 360) {
    seno = sin(angulo);
    Serial.println(seno);

    angulo++;
  }

//  if (angulo <= 360) {
//    coseno = sin(angulo);
//    Serial.println(coseno);
//
//    angulo++;
//  }

//  if (angulo <= 360) {
//    tangente = sin(angulo);
//    Serial.println(tangente);
//
//    angulo++;
//  }
}
