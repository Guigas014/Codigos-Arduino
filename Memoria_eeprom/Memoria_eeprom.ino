#include <EEPROM.h>

int contador = 0;


void setup() {
  Serial.begin(9600);

  if (EEPROM[0] != 9) {
    EEPROM[0] = 9;
    EEPROM[1] = 0;
  } else {
    contador = EEPROM[1];
  }

}

void loop() {
  Serial.println(contador);
  contador++;
  EEPROM[1] = contador;
  delay(1000);
}
