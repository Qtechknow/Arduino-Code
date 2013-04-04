/*  BounceLEDs

"Bounces" LEDs back and forth on the QBar Graph.

made on 22 July 12
created by Quin (Qtechknow)
*/

const int ledPins[] = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4 };  // array!

void setup() {
  for(int i=0; i<10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for(int y=0; y<10; y++) {  // light all LEDs up, one by one
        digitalWrite(ledPins[y], HIGH);
        delay(30);
      }
      for(int z=0; z<10; z++) {  // turn all LEDs off, one by one
        digitalWrite(ledPins[z], LOW);
        delay(30);
      }
      for(int x=10; x>0; x--) {  // light all LEDs up, going the other way
        digitalWrite(ledPins[x], HIGH);
        delay(30);
      }
      
      for(int w=10; w>0; w--) {  // turn all LEDs off, one by one
        digitalWrite(ledPins[w], LOW);
        delay(30);
      }   
}
