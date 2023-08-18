#include <Ultrasonic.h>                                    // Incluindo a biblioteca do ultrasonic

Ultrasonic ultrasonic(7, 6);
int distancia;
const int ledPin1 = 3;
const int ledPin2 = 4;
const int ledPin3 = 5;

// Triger 7
// Echo 13
// VCC 5V
// GND GND

void setup() {
  
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop() {
  
  distancia = ultrasonic.read();
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  delay(1000);

  if (distancia < 15) {

    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    
  } else if (distancia > 15 && distancia < 30){

    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);
    
  } else if (distancia > 30) {

    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  
  } else {

    Serial.println("Há algo de arrado");
    
  }
  Serial.println("Era para ligar");
}


  // Triger é o emissor, vai medir as distancias 
  // Echo é o receptor, 
  
