int ledv = PA0;
int ledo = PA1;
int ledr = PA2;

void setup() {
  pinMode(ledv, OUTPUT);
  pinMode(ledo, OUTPUT);
  pinMode(ledr, OUTPUT);
}

void loop() {
  digitalWrite(ledv, HIGH);
  digitalWrite(ledo, LOW);
  digitalWrite(ledr, LOW);
  delay(5000);
  digitalWrite(ledv, LOW);
  digitalWrite(ledo, HIGH);
  digitalWrite(ledr, LOW);
  delay(5000);
  digitalWrite(ledv, LOW);
  digitalWrite(ledo, LOW);
  digitalWrite(ledr, HIGH);
  delay(5000);
}
