// Definição dos pinos
const int Pir = 2;    // Pino de sinal do sensor PIR
const int Pinoled = 4;   // Pino do LED

void setup() {
  // PIR entrada
  pinMode(Pir, INPUT);
  // LED saída
  pinMode(Pinoled, OUTPUT);   
  Serial.begin(9600);    
}
// Lê o valor do PIR (HIGH = 1)
void loop() {
  int movimento = digitalRead(Pir); 
	
  // Acende o LED
  if (movimento == HIGH) {
    digitalWrite(Pinoled, HIGH);  
    Serial.println("Movimento detectado!");
  } 
  
  // Apaga o LED (LOW = 0)
  else {
    digitalWrite(Pinoled, LOW);   
    Serial.println("Sem movimento.");
    
    
  }

  delay(200); 
}