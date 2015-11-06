#include<Servo.h>
Servo myServo1;
Servo myServo2;
Servo myServo3;

int pos = 0;

void setup() {
  Serial.begin(9600);
  myServo1.attach(9);
  myServo2.attach(10);
  myServo3.attach(11);
}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1)
  {
    myServo1.write(pos / 2);
    myServo2.write(pos / 2);
    myServo3.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1)
  {
    myServo1.write(pos / 2);
    myServo2.write(pos / 2);
    myServo3.write(pos);
    delay(15);
  }
}




