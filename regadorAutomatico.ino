#define motor 2
#define ldr A0
#define led 4
#define sensorUmidade A1

int luz = 0;
int leitura_sensor = 0;
int luzIdeal = 400;
float umidadeIdeal = 270;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(sensorUmidade, INPUT);
  
  digitalWrite(motor, LOW);

  Serial.begin(9600);
  
}

void loop()
{ 
  luz = analogRead(ldr);
  
  Serial.print("luz: ");
  Serial.println(luz);
  
  leitura_sensor = analogRead(sensorUmidade);
  float tensao = leitura_sensor*(5.0/1023);
  Serial.print("Leitura: ");
    Serial.print(leitura_sensor);
    Serial.print("  |  ");
    Serial.print("Tensao: ");
    Serial.println(tensao);
  
  if(luz < luzIdeal){
    ligarLed();
  }
  else{
    desligarLed();
  }
  
  if(leitura_sensor > umidadeIdeal){
    ligarAgua();
  }
  else{
    desligarAgua();
  }
  delay(500);
}

// Ligar/desligar bomba de agua
void ligarAgua() {
  digitalWrite(motor, HIGH);
}

void desligarAgua() {
  digitalWrite(motor, LOW);
}
// Acender/apagar led
void ligarLed(){ 
  digitalWrite(led, HIGH);
}

void desligarLed(){
  digitalWrite(led, LOW);
}