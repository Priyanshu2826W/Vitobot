// Pin Definitions
const int SWITCH_PIN = 4;
const int GREEN_LED  = 6;
const int RED_LED    = 5;

// Blink timing
const int BLINK_DELAY = 300;

void setup() {
  pinMode(SWITCH_PIN, INPUT_PULLUP);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // Read switch state (LOW = pressed)
  bool isPressed = (digitalRead(SWITCH_PIN) == LOW);

  if (isPressed) {
    handlePressedState();
  } else {
    handleReleasedState();
  }
}

// 🟢 When button is pressed
void handlePressedState() {
  digitalWrite(GREEN_LED, HIGH);  // Green ON
  digitalWrite(RED_LED, LOW);     // Red OFF
}

// 🔴 When button is released
void handleReleasedState() {
  digitalWrite(GREEN_LED, LOW);   // Green OFF

  // Red blinking
  digitalWrite(RED_LED, HIGH);
  delay(BLINK_DELAY);

  digitalWrite(RED_LED, LOW);
  delay(BLINK_DELAY);
}