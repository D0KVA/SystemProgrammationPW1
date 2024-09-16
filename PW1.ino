#define LED_PIN_GREEN 4
#define LED_PIN_YELLOW 2
#define LED_PIN_RED 3

void setup() {
  pinMode(LED_PIN_GREEN, OUTPUT); 
  pinMode(LED_PIN_YELLOW, OUTPUT);
  pinMode(LED_PIN_RED, OUTPUT); 
}
void loop() {
  digitalWrite(LED_PIN_RED, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN_RED, LOW);
  digitalWrite(LED_PIN_YELLOW, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN_YELLOW, LOW);
  digitalWrite(LED_PIN_GREEN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN_GREEN, LOW);
  delay(1000);
  
  for (int i = 1; i <= 5; i++){
  digitalWrite(LED_PIN_GREEN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN_GREEN, LOW);
  }

  digitalWrite(LED_PIN_YELLOW, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN_YELLOW, LOW);
}