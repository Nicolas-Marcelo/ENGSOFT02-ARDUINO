const int buttonPin1 = 7;                  // O numero do puschbutton
const int ledPin = 6;
int buttonState1 = 0;                      // Armazenar o valor do estado do botão
int estadoButton = 0;

void setup() {
  
  Serial.begin(9600);                      // Inicialização do monitor
  pinMode(buttonPin1, INPUT);              // Inicializando o Pin como entrada
  pinMode(ledPin, OUTPUT);                 // Inicializando o pin como entrada
  
}

void loop() {

  while (true) {
  //estadoButton = digitalRead(buttonPin1);   // Armazena 
  //buttonState1 = digitalRead(buttonPin1);   // Lendo o estado do botão
  //Serial.println (buttonState);             // Imprimindo os dados do botão 
    digitalWrite(ledPin, LOW);
    
                 
  do{
      
     buttonState1 = digitalRead(buttonPin1);
     delay(400);
     
     if(buttonState1 == 1) {    // Regra de dois botões para o LED ficar aceso
      
        Serial.println ("Ligado e Aceso!");
        estadoButton = estadoButton + 1;
    }

   
  } while(estadoButton < 4);
  
     if (buttonState1 == 0) {
  
       digitalWrite(ledPin, HIGH);
       Serial.println ("Era pra ligar!");
       delay(4000);
     
  }

}}





