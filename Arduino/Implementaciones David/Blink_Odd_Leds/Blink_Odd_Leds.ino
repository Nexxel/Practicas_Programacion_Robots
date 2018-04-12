int leds[] = { 9, 7, 4, A3};
int frequencies[] = {500, 1000, 1500, 2500};
int current_led = 0;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < sizeof(leds); i++) {
    pinMode(leds[i], OUTPUT);  
  }
 
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(leds[current_led], HIGH);
  delay(frequencies[current_led]);
  digitalWrite(leds[current_led], LOW);
  delay(frequencies[current_led]);
  current_led = (current_led + 1) % sizeof(leds);
}
