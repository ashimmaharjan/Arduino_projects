/* distance= (traveltime/2) * speed of sound
 *  speed of sound is 343m/s = 0.0343 cm/uS = 1/29.1 cm/uS\
 *  trig pin sends waves and echo pin recieves.
 *  
 */


const int trigPin=7;
const int echoPin=6;
const int redLed=4;
const int greenLed=5;

float duration , distance;
void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance=(duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  
  if(distance<20)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);  
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);  
  }
  delay(100);
  

}
