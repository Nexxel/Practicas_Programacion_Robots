int leds[] = {9, 7, 4, A3};
int frequencies[] = {500, 1000, 1500, 2500};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<sizeof(leds); i++){
   pinMode(leds[i], OUTPUT); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0; i<sizeof(leds); i++){
   blink(leds[i], frequencies[i]);
  }
}

void blink(int led, int frequency){
  digitalWrite(led, HIGH);
  delay(frequency);
  digitalWrite(led, LOW);
  delay(frequency);
}

