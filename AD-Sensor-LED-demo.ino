/******************************************************************************************
Reads an open-collector AD-Series digital magnetic sensor with an Arduino Uno. 
Sensor output on IO2; the Arduino drives an LED (through a series resistor) on IO13.
****************************;***************************************************************/
void setup() {
  pinMode(13, OUTPUT); //Set the LED driver (IO13) as an output
  pinMode(2, INPUT); //Set the sensor connection (IO2) as an input
  digitalWrite(2, HIGH); //Activate the input pull-up resistor by writing a HIGH
}

void loop() {
  if(digitalRead(2) == LOW) //Read the sensor (LOW = on)
  {
    digitalWrite(13, HIGH); //Turn the LED on if the sensor is on
  }
  else digitalWrite(13, LOW); //Turn the LED off if the sensor is off
}

