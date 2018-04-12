#define TRIMMER_PIN A5

int leds[] = {9, 7, 4, A3};

void setup() {
  // put your setup code here, to run once:
  pinMode(A5, INPUT);
  for(int i=0; i<sizeof(leds); i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int frequency = analogRead(TRIMMER_PIN);
  int[] leds_blink = checkFrequency(frequency);
  blinkLED(leds_blink, frequency);
}

int[] checkFrequency(int frequency){
  if(frequency < 256){
    return [leds[0]];
  }else if(frequency >= 256 || frequency < 512){
    return [leds[0], leds[1]];
  }else if(frequency >= 512 || frequency < 768){
    return [leds[0], leds[1], leds[2]];
  }else{
    return leds;
  }
}

void blinkLED(int[] leds_blink,int frequency){
  for(int i=0; i<sizeof(leds_blink); i++){
    digitalWrite(led[i], HIGH);
    delay(frequency);
    digitalWrite(led[i], LOW);
    delay(frequency);
  }
}

