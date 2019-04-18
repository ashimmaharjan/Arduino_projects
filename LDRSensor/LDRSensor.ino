
const int LDR=A2;
const int redLed=12;
const int blue=10;
float sensorvalue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LDR, INPUT);
pinMode(redLed, OUTPUT);
pinMode(blue,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

sensorvalue=analogRead(LDR);
Serial.println("Sensor value");
Serial.println(sensorvalue);

if (sensorvalue<200)
{
  digitalWrite(redLed,HIGH);
  digitalWrite(blue,LOW);
}
else
{
  digitalWrite(blue,HIGH);
   digitalWrite(redLed,LOW);
 
}
}
