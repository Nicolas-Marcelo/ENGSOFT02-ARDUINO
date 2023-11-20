#include <Ultrasonic.h>                                    // Incluindo a biblioteca do ultrasonic

int buzzer = 8;//Atribui o valor 8 a variável buzzer, que representa o pino digital 8, onde o buzzer está conectado
int i = 0;//Variável para contar o número de vezes que o buzzer tocou

Ultrasonic ultrasonic(10, 9);
int distancia;

// Triger 7
// Echo 13
// VCC 5V
// GND GND

void setup() {
  
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);//Definindo o pino buzzer como de saída
  
}

void loop() {
  
  distancia = ultrasonic.read();
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  delay(1000);

  if (distancia < 250) {

    Serial.println("Cuidado, está muito perto!");
    tone(buzzer,1500);//Ligando o buzzer com uma frequência de 1500 Hz.
    delay(500);
    noTone(buzzer);
   
  
  } else {

    noTone(buzzer);
    Serial.println("Distancia segura!");
    
  }

}
