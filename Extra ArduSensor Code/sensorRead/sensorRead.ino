/* Simple Sensor Read Sketch
 Reads the input value at A0 
 */

int sensorValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue=analogRead(0);
  Serial.println(sensorValue, DEC);
  delay(100);
}

