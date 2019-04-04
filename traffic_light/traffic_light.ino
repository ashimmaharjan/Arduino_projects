     int red=2;
     int yellow=4;
     int green=7;
     int pedRed=8;
     int pedGreen=12;

void setup() {
  // put your setup code here, to run once:
  
     pinMode(red,OUTPUT);
     pinMode(yellow,OUTPUT);
     pinMode(green,OUTPUT);
     pinMode(pedRed,OUTPUT);
     pinMode(pedGreen,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(pedGreen,HIGH);
  digitalWrite(pedRed,LOW);
  delay(3000);

  for(int i=0;i<=5;i++)
  {
    digitalWrite(pedGreen,HIGH);
    delay(100);
    digitalWrite(pedGreen,LOW);
    delay(100);
  }


  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(pedGreen,LOW);
  digitalWrite(pedRed,LOW);
  delay(3000);

  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(pedGreen,LOW);
  digitalWrite(pedRed,HIGH);
  delay(3000);

  for(int i=0;i<=5;i++)
  {
    digitalWrite(pedRed,HIGH);
    delay(100);
    digitalWrite(pedRed,LOW);
    delay(100);
  }


  
}
