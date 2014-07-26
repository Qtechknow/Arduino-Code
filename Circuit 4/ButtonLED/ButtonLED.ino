/* Digital Input Example

If the buttons are pressed, then we'll turn on the LEDs.

made on 22 July 12
created by Quin
*/

const int buttonPin1 = 4;  // assign the values
const int buttonPin2 = 3;

const int ledPin1 = 9;  // more variables
const int ledPin2 = 8;

void setup() {
  pinMode(buttonPin1, INPUT);  // buttons are input
  pinMode(buttonPin2, INPUT);
  
  pinMode(ledPin1, OUTPUT);  // LEDs are output
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  int buttonVal1=digitalRead(buttonPin1);  // read the value of the
  int buttonVal2=digitalRead(buttonPin2);  // buttons
  
  if(buttonVal1 == HIGH) {
    digitalWrite(ledPin1, HIGH);  // if the 1st button is pressed,
  }else{
    digitalWrite(ledPin1, LOW);   // turn the LED on
  }
  
  if(buttonVal2 == HIGH) {
    digitalWrite(ledPin2, HIGH);  // if the 2nd button is pressed,
  }else{
    digitalWrite(ledPin2, LOW);   // turn the other LED on
  }
}
