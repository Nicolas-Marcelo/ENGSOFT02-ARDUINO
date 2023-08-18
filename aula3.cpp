const int pinLDR = A0;
const int ledPin = 7;

void setup() {
  // Sensor LDR, serson que mede sua resistencia através da luz refletida sobre ele.
  // Primeira ler as informações do sendor 
  // Sensor é sempre entrada

  pinMode (pinLDR, INPUT);
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);

  // Serial begin para inciar o terminal serail

}

void loop() {
  // Ler a inforamção analogica
  // Primeiro criar uma variavel que vai receber esta função
  

  int leituraLDR = analogRead(pinLDR);
  Serial.print(leituraLDR);
  delay(500);

  if (leituraLDR >= 800){
    
    digitalWrite (ledPin, LOW);
    Serial.println(" Está bem alumiado!");

  } else {

    digitalWrite (ledPin, HIGH);
    Serial.println(" Luz de emergencia ligada");
    }
  }

  // LOW é apagado
  // HIGH é aceso

  // Nossa media é 950 com a luz acesa
  // Nossa media é 605 com a luz apagada
