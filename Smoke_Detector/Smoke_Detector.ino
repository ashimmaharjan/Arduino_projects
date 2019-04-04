// go and see how voltage divider works.

#define MQ2pin (2) //analog port

float sensorvalue;

int red=4;
int green=6;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode (MQ2pin, INPUT);
  Serial.begin(9600); //sets the serial port to 9600
  Serial.println("Gas sensor warming up!");
  delay(20000); //allow the MQ2 to warm up
  
}

// the loop function runs over and over again forever
void loop() {

  sensorvalue=analogRead(MQ2pin); //read analog input pin 0

  Serial.println("Sensor value: ");
  Serial.println(sensorvalue);
  delay(200);

  if (sensorvalue>40)
  {
    Serial.println("Smoke detected!");
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
  else
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }

  
  
}
