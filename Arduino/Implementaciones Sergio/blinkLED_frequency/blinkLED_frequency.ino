#define TRIMMER_PIN A5

int leds[] = {9, 7, 4, A3};

void setup() {
  // put your setup code here, to run once:
  pinMode(A5, INPUT);
  for (int i = 0; i < sizeof(leds); i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int frequency = analogRead(TRIMMER_PIN);
  int* leds_blink = checkFrequency(frequency);
  blinkLED(leds_blink, frequency);
}

int* checkFrequency(int frequency) {
  if (frequency < 256) {
    int leds_blink[] = {leds[0]};
    return leds_blink;
  } else if (frequency >= 256 || frequency < 512) {
    int leds_blink[] = {leds[0], leds[1]};
    return leds_blink;
  } else if (frequency >= 512 || frequency < 768) {
    int leds_blink[] = {leds[0], leds[1], leds[2]};
    return leds_blink;
  } else {
    return leds;
  }
}

void blinkLED(int* leds_blink, int frequency) {
  for (int i = 0; i < sizeof(leds_blink); i++) {
    digitalWrite(leds_blink[i], HIGH);
    delay(frequency);
    digitalWrite(leds_blink[i], LOW);
    delay(frequency);
  }
}

