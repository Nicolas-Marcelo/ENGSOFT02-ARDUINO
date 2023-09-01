#include <DHT.h>

// DHT sendor de temperatura e umidade do ambiente 
// VDD mesma coisa que o VCC positivo direita, : visto de frente
// BDA perna que traz o dado lado do positivo
// GND perna negativa esquerda
// Predisa de um resistor de 10k ohms direto no VCC
// Bilbioteca tem de ser instalada
// Buzzer, aparelho que toca som na placa

#define DHTPIN 8                    // Pino que esta conectado
#define DHTTYPE DHT11                // Definindo o tipo do DHT
const int ledPin1red = 5;
const int ledPin2green = 4;
 

int buzzer = 7;
DHT dht (DHTPIN, DHTTYPE);

void setup() {
  
  dht.begin();
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

  pinMode(ledPin1red, OUTPUT);
  pinMode(ledPin2green, OUTPUT);

}

void loop() {

  // Delay não pode ser menos que 250
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (t <= 25) {
    digitalWrite(ledPin1red, LOW);
    delay(200);

    digitalWrite(ledPin2green, HIGH);
    delay(200);
    
    Serial.println("Era para dar certo11111");

  } else {
    digitalWrite(ledPin2green, LOW);
    delay(200);

    digitalWrite(ledPin1red, HIGH);
    delay(200);
    
    Serial.println("Era para dar certo22222");
    tone(buzzer, 2000);         // Ativa a frenquencia de C em hz
    delay(900);
    noTone(buzzer);
    delay(100);
  }

  Serial.print("Umidade: ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println("°C ");
  delay(1000);
}

