const int pinoLamp = 13; //PINO DIGITAL UTILIZADO PELO LED
const int pinoLDR = A0; //PINO ANALÓGICO UTILIZADO PELO LDR
  
void setup(){
  Serial.begin(9600);
  pinMode(pinoLamp, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLDR, INPUT); //DEFINE O PINO COMO ENTRADA
} 
   
void loop(){

  int ldrStatus= analogRead(pinoLDR);
  if(ldrStatus <= 300){
    digitalWrite(pinoLamp, HIGH);
    Serial.println("Valor do LDR: " + String(ldrStatus) + " - LED ligado");
    delay(1000);
        }
else{
    digitalWrite(pinoLamp, LOW);
    Serial.println("Valor do LDR: " + String(ldrStatus) + " - LED desligado");
    delay(1000);
  }  
}
