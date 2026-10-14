
// Definición de pines de los relés según tu diagrama de Wokwi
const int RELAY_1 = 18; // LED 3
const int RELAY_2 = 19; // LED 4
const int RELAY_3 = 21; // LED 1
const int RELAY_4 = 22; // LED 2

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando secuencia de control...");

  // Configurar pines como salidas
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
  pinMode(RELAY_4, OUTPUT);

  // Apagar todos al iniciar
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, LOW);
  digitalWrite(RELAY_3, LOW);
  digitalWrite(RELAY_4, LOW);
}

void loop() {
  // 1. Encender el primer LED y apagarlo
  Serial.println("1. Primer LED encendido y apagado");
  digitalWrite(RELAY_3, HIGH);
  delay(1000);
  digitalWrite(RELAY_3, LOW);
  delay(500);

  // 2. Encender el segundo LED y apagarlo
  Serial.println("2. Segundo LED encendido y apagado");
  digitalWrite(RELAY_4, HIGH);
  delay(1000);
  digitalWrite(RELAY_4, LOW);
  delay(500);

  // 3. Encender el tercer LED y apagarlo
  Serial.println("3. Tercer LED encendido y apagado");
  digitalWrite(RELAY_1, HIGH);
  delay(1000);
  digitalWrite(RELAY_1, LOW);
  delay(500);

  // 4. Encender el cuarto LED y apagarlo
  Serial.println("4. Cuarto LED encendido y apagado");
  digitalWrite(RELAY_2, HIGH);
  delay(1000);
  digitalWrite(RELAY_2, LOW);
  delay(500);

  // 5. Encender las 2 ruedas de adelante
  Serial.println("5. Encendiendo las 2 ruedas de adelante");
  digitalWrite(RELAY_1, HIGH);
  digitalWrite(RELAY_2, HIGH);
  delay(1500);
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, LOW);
  delay(500);

  // 6. Encender los 4 LEDs y se van a apagar
  Serial.println("6. Encendiendo los 4 LEDs y apagando");
  digitalWrite(RELAY_1, HIGH);
  digitalWrite(RELAY_2, HIGH);
  digitalWrite(RELAY_3, HIGH);
  digitalWrite(RELAY_4, HIGH);
  delay(2000);
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, LOW);
  digitalWrite(RELAY_3, LOW);
  digitalWrite(RELAY_4, LOW);
  delay(500);

  // 7. 2 de la derecha se prenden
  Serial.println("7. 2 de la derecha se prenden");
  digitalWrite(RELAY_3, HIGH);
  digitalWrite(RELAY_4, HIGH);
  delay(1500);
  digitalWrite(RELAY_3, LOW);
  digitalWrite(RELAY_4, LOW);
  delay(500);

  // 8. 2 de la izquierda se prenden
  Serial.println("8. 2 de la izquierda se prenden");
  digitalWrite(RELAY_1, HIGH);
  digitalWrite(RELAY_2, HIGH);
  delay(1500);
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, LOW);
  
  // Pausa antes de repetir
  Serial.println("--- Secuencia terminada, reiniciando --- \n");
  delay(3000); 
}