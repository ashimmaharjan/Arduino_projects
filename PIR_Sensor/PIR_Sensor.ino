int ledPin =13;        
int inputPin=8;         //choose the input pin for PIR sensor
int pirState=LOW;       //we start assuming no motion detected 
int val=0;              //variable for reading the pin status
void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  val=digitalRead(inputPin);

  if(val==HIGH)
  {
    digitalWrite(ledPin,HIGH);

    if(pirState==LOW)
    {
      Serial.println("Motion detectedd");
      pirState=HIGH;
    }
  }
  else
  {
    digitalWrite(ledPin,LOW);

    if(pirState==HIGH)
    {
      Serial.println("Motion ended");
      pirState=LOW;
    }
  }
}
