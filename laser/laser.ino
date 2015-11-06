#include<Servo.h>
Servo myServo1;
Servo myServo2;


void setup() {
  Serial.begin(9600);
  myServo1.attach(10);
  myServo2.attach(11);
}

void loop() {
  int xAxis = analogRead(A1);
  int yAxis = analogRead(A2);
  int x = map(xAxis, 0, 1023, 50, 130);
  int y = map(yAxis, 0, 1023, 120, 60);

  if (millis() % 20 < 2) {
    myServo1.write(x);
    myServo2.write(y);
  }
}
