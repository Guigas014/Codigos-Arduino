#include <Keyboard.h>
#include <KeyboardLayout.h>




void setup() {
  // Configura o pino 2 como entrada e ativa
  // o resistor pull-up tal que o pino seja HIGH
  // a menos que conectado ao ground:
  
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

        
  // inicializa o controle do teclado virtual:
  Keyboard.begin();
}

void loop() {
  
  
 while (digitalRead(2) == HIGH) {
   //atalho 2
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t'); //equivalente ao atalho control + v
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);
  
  
  
//atalho 3 
  while (digitalRead(3) == HIGH) {
   
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press('n'); //equivalente ao atalho control + n
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);
  
  
  
//atalho 4
  while (digitalRead(4) == HIGH) {
   
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press('v'); //equivalente ao atalho control + v
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);
    

  
//atalho 5    
  while (digitalRead(5) == HIGH) {
   //atalho 5
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press('v'); //equivalente ao atalho control + v
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);
    
   
   
  //atalho 6   
  while (digitalRead(6) == HIGH) {
   //atalho 6
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press('v'); //equivalente ao atalho control + v
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);



//atalho 7
   while (digitalRead(7) == HIGH) {
  //atalho 7 
    delay(500);
  }
  delay(1000);
  //um exemplo de combinação
  Keyboard.press(KEY_LEFT_CTRL); //voce deve apagar o que esta entre () para colocar a tecla que voce quiser.
  Keyboard.press('c'); //equivalente ao atalho control + c
  delay(100);
  Keyboard.releaseAll();
  // espera uma nova janela abrir no computador:
  delay(1000);
  
}
