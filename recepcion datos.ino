/* Programa web de analise de datos
este programa encargarase de mostrar os datos recollidos nunha pantalla
para a sua visualizacion
  */
//definicion de variables
float temperatura e humidade;
float velocidade vento;
float altura maleza;
float crecemento tronco;
float altura poda;
float diametro tronco;
void setup(){
  //iniciacion do puerto serie
  Serial.beguin(9600);
}
//lectura a mostrado dos datos
void loop(){
  temperatura e humidade = analogRead(A0);
  velocidade vento = analogRead(A0);
  altura maleza= analogRead(A0);
  crecemento tronco = analogRead(A0);
  altura poda = analogRead(A0);
  diametro tronco = analogRead(A0);
 Serial.println("- Temperatura e humidade: "); 
  Serial.print(temperatura e humidade);
  Serial.println("- Velocidade do vento: ");
  Serial.print(velocidade vento);
 Serial.println("- Altura da maleza: ");
  Serial.print(altura maleza);
  Serial.println("- Crecemento do tronco: ");
  Serial.print(crecemento tronco);
  Serial.println("- Altura de poda: ");
  Serial.print(altura poda);
  Serial.println("- diametro do tronco: ");
  Serial.print(diametro tronco);
delay 3600000; 
}
