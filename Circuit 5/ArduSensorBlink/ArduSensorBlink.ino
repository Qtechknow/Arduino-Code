/*  ArduSensor Blink with LED

Blinks the built-in LED at D13 proportionate to the value of your ArduSensor
at pin A0.

created 5 Apr 2012
by Quin (Qtechknow)
http:/www.qtechknow.com/

*/

const int ledPin = 13;  // variable that stays the same, all the time

int sensorValue;  // variable to store the value of the ArduSensor

void setup() {
  pinMode(ledPin, OUTPUT);  // the led is our output
}

void loop() {
  sensorValue=analogRead(0);   // sensorValue is the value of our ArduSensor
  
  digitalWrite(ledPin, HIGH);   // blink the LED proportionate to the value
  delay(sensorValue/4);         // of the ArduSensor
  digitalWrite(ledPin, LOW);
  delay(sensorValue/4);         // divide by 4 to get the blink value
}
