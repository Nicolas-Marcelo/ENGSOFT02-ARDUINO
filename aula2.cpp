const int buttonPin1 = 7;                  // O numero do puschbutton
const int buttonPin2 = 2;                  // O numero do puschbutton
const int ledPin = 6;
int buttonState1 = 0;                      // Armazenar o valor do estado do botão
int buttonState2 = 0;                      // Armazenar o valor do estado do botão

void setup() {
  Serial.begin(9600);                      // Inicialização do monitor
  pinMode(buttonPin1, INPUT);              // Inicializando o Pin como entrada
  pinMode(buttonPin2, INPUT);              // Inicializando o Pin como entrada
  pinMode(ledPin, OUTPUT);                 // Inicializando o pin como entrada
  
}

void loop() {
  
  buttonState1 = digitalRead(buttonPin1);   // Lendo o estado do botão
  buttonState2 = digitalRead(buttonPin2);   // Lendo o estado do botão
  //Serial.println (buttonState);           // Imprimindo os dados do botão 
  delay(100);                  
  
  if(buttonState1 & buttonState2 == 1) {    // Regra de dois botões para o LED ficar aceso
    
    Serial.println ("Ligado e Aceso!");
    digitalWrite(6, HIGH);
    digitalWrite(2, HIGH);
   
  } else  {

    Serial.println ("Desligado e Apagado!");
    digitalWrite(6, LOW);
    digitalWrite(2, LOW);
    
  }}




