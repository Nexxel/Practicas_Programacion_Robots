#define TRIMMER_PIN A5

int leds[] = { 9, 7, 4, A3};

void setup() {
  // put your setup code here, to run once:
  pinMode(TRIMMER_PIN, INPUT);
  for(int i = 0; i < sizeof(leds); i++) {
    pinMode(leds[i], OUTPUT);  
  }
}

void loop() {
  int frequency = analogRead(TRIMMER_PIN);
  if (frequency < 256) {
    blinkLed(leds[0], frequency);
  } else if(frequency < 512) {
    blinkLed(leds[1], frequency);
  } else if(frequency < 768) {
    blinkLed(leds[2], frequency);
  } else {
    blinkLed(leds[3], frequency);
  }
}



void blinkLed(int led, int frequency) {
  digitalWrite(led, HIGH);
  delay(frequency);
  digitalWrite(led, LOW);
  delay(frequency);
}

