int ledPIN01 = 13; 
int ledPIN02 = 12; 
int ledPIN03 = 8; 

void setup() {
  // Função de configuração do arduino 
  pinMode(ledPIN01, OUTPUT);
  pinMode(ledPIN02, OUTPUT);

}

void loop() {
  // função para repetir  o algoritmo infinitamente...
digitalWrite(ledPIN01, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPIN01, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(ledPIN02, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(ledPIN02, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

    
  digitalWrite(ledPIN03, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(ledPIN03, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}
