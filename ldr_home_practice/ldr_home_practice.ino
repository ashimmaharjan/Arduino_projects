  
const int LDR=A2;
const int redLed=8;
float sensorvalue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LDR, INPUT);
pinMode(redLed, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

sensorvalue=analogRead(LDR);
Serial.println("Sensor value");
Serial.println(sensorvalue);
delay(200);

if (sensorvalue<200)
{
  digitalWrite(redLed,HIGH);
}
else
{
   digitalWrite(redLed,LOW);
 
}
}
