#define LDRPIN 2
void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  int val = analogRead(LDRPIN);
  Serial.println("Value: ");
  Serial.println(val);
  delay(1000);
}