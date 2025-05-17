// Saida D2 conectado ao terminal de controle do relé.
const int Rele = 2;
// Ligação porta analógica A0 do Arduino.
const int pinoFotorresistor = A0; 


// Função executada quando o arduino liga ou Reseta
void setup() {

    // Configuração do pino do relé como saída.
    pinMode(Rele, OUTPUT);
    //O rele liga em 0V
    digitalWrite(Rele, LOW);
    //Inicia a comunicação serial
    Serial.begin(10000);
    delay(1000);
}
//Looping
void loop() {
    
   
    int Fotoresistor = analogRead(pinoFotorresistor);
    Serial.println(Fotoresistor);
  //a Luz acende assim que a luminosidade diminui abaixo de 780
    int limite = 780;

    if (Fotoresistor < limite) {

        // Liga a lâmpada
        digitalWrite(Rele, HIGH);
    }
    else{
        // Apaga a lâmpada
        digitalWrite(Rele, LOW);
    }
    //Delay do Looping (Tempo em que a luz fica acesa e apagada)
    delay(500);
}