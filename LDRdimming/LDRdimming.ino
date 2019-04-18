int photocellPin=A2;
int photocellReading;
int LEDPin=12;
int LEDbrightness;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  photocellReading=analogRead(photocellPin);
  //Serial.print("Analog reading=");
  //Serial.println(photocellReading);

  photocellReading=1023-photocellReading;
  LEDbrightness=map(photocellReading,0,1023,0,255);
  analogWrite(LEDPin,LEDbrightness);
}
