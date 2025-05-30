#define LED_PIN 10 // sample pin
#define BUTTON_PIN 4 // sample

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //blinkLed(LED_PIN, 1000);
  controlLedWithButton(BUTTON_PIN, LED_PIN);
}

/*
void blinkled(int pin, int interval) {
  digitalWrite(pin, HIGH);
  Serial.println("LED ON");
  delay(interval);

  digitalWrite(pin, LOW);
  Serial.println("LED OFF");
  delay(interval);
}
*/

// turns on the LED when the button is pressed
void controlLedWithButton(int buttonPin, int ledPin) {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button PRESSED - LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Button RELEASED - LED OFF");
  }

  delay(200);
}
