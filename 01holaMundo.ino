/*1ER PRACTICA, HOLA MUNDO - ENCENDER UN LED, TIPO PARPADEO */

void setup() {
//Todo el codigo que se necesita se ejecute una vez
  
  pinMode(13,OUTPUT); //DECLARACION DE PING 13 COMO SALIDA
  
}

void loop() {
  //ejecución continua
 digitalWrite(13,HIGH); // Encendemos el LED
 delay(1000); // tiempo de espera en milisegundos
 digitalWrite(13,LOW); // Apagamos el LED
 delay(1000); // tiempo de espera en milisegundos
}
