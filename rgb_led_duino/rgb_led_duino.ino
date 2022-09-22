/*
  rbg_led_duino

  Reads the analog inputs corresponding to the 3 pots.
  Generate PWM signals proportional to the button positions to drive 
  the RGB channels.

*/

// Initialisation
void setup() {
  // Serial communication at 9600 bauds
  // Serial.begin(9600);
}

// Main loop
void loop() {
  // Read the input on analog pins:
  int pot_left_raw = analogRead(A1);
  int pot_center_raw = analogRead(A0);
  int pot_right_raw = analogRead(A2);

  // Print out the values on serial port
  // Serial.print("R: ");
  // Serial.print(pot_left_raw);
  // Serial.print(" | G: ");
  // Serial.print(pot_center_raw);
  // Serial.print(" | B: ");
  // Serial.println(pot_right_raw);

  analogWrite(3, pot_left_raw >> 2);
  analogWrite(5, pot_center_raw >> 2);
  analogWrite(6, pot_right_raw >> 2);

  delay(10);
}
