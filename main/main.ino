#define LED_PIN 10 // sample pin

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  blinkLed(LED_PIN, 1000);
}

void blinkled(int pin, int interval) {
  digitalWrite(pin, HIGH);
  Serial.println("LED ON");
  delay(interval);

  digitalWrite(pin, LOW);
  Serial.println("LED OFF");
  delay(interval);
}
