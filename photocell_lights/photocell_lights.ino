//lights
int purpleLightsOn = 1;
int redLightsOn = 1;
int blueLightsOn = 1;
int greenLightsOn = 1;
int orangeLightsOn = 1;

//blink
int lights = 1;

int roomLight = 250;
long gameTime = 30000;
long startBlinkTime = 2 * gameTime / 3;
int blinkInterval = 200;
long currentMillis;
long previousMillis = startBlinkTime;

//sound
int duration = 50;
int endDuration = 300;


void setup() {
  //sound
  pinMode(11, OUTPUT);

  //purple monster
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  //red monster
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //blue monster
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  //green monster
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  //orange monster
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  //game starts!
  if (millis() < startBlinkTime) {

    //start sound
    if (millis() < 400) {
      tone(11, 200, duration);
      delay(duration);
      tone(11, 300, duration);
      delay(duration);
      tone(11, 400, duration);
      delay(duration);
      tone(11, 500, duration);
      delay( duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 900, duration);
      delay(duration);
    }


    //purple monster
    int sensorPurple = analogRead(A4);
    if (sensorPurple > roomLight && purpleLightsOn == 1) {
      purpleLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
    }
    digitalWrite(2, purpleLightsOn);
    digitalWrite(3, purpleLightsOn);


    //red monster
    int sensorRed = analogRead(A3);
    if (sensorRed > roomLight && redLightsOn == 1) {
      redLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
    }
    digitalWrite(4, redLightsOn);
    digitalWrite(5, redLightsOn);


    //blue monster
    int sensorBlue = analogRead(A2);
    if (sensorBlue > roomLight && blueLightsOn == 1) {
      blueLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
    }
    digitalWrite(6, blueLightsOn);
    digitalWrite(7, blueLightsOn);


    //green monster

    int sensorGreen = analogRead(A1);
    if (sensorGreen > roomLight && greenLightsOn == 1) {
      greenLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
    }
    digitalWrite(8, greenLightsOn);
    digitalWrite(9, greenLightsOn);


    //orange monster

    int sensorOrange = analogRead(A0);
    if (sensorOrange > roomLight && orangeLightsOn == 1) {
      orangeLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
    }
    digitalWrite(10, orangeLightsOn);
    digitalWrite(12, orangeLightsOn);

  }

  // lights start blinking!
  if (millis() >= startBlinkTime && millis() <= gameTime  ) {
    currentMillis = millis();

    //purple monster
    int sensorPurple = analogRead(A4);
    if (sensorPurple > roomLight && purpleLightsOn == 1) {
      purpleLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
      digitalWrite(2, purpleLightsOn);
      digitalWrite(3, purpleLightsOn);
    }


    //red monster
    int sensorRed = analogRead(A3);
    if (sensorRed > roomLight && redLightsOn == 1) {
      redLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
      digitalWrite(4, redLightsOn);
      digitalWrite(5, redLightsOn);
    }


    //blue monster
    int sensorBlue = analogRead(A2);
    if (sensorBlue > roomLight && blueLightsOn == 1) {
      blueLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
      digitalWrite(6, blueLightsOn);
      digitalWrite(7, blueLightsOn);
    }


    //green monster
    int sensorGreen = analogRead(A1);
    if (sensorGreen > roomLight && greenLightsOn == 1) {
      greenLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
      digitalWrite(8, greenLightsOn);
      digitalWrite(9, greenLightsOn);
    }


    //orange monster
    int sensorOrange = analogRead(A0);
    if (sensorOrange > roomLight && orangeLightsOn == 1) {
      orangeLightsOn = 0;
      tone(11, 900, duration);
      delay(duration);
      tone(11, 800, duration);
      delay(duration);
      tone(11, 700, duration);
      delay(duration);
      tone(11, 600, duration);
      delay(duration);
      tone(11, 500, duration);
      digitalWrite(10, orangeLightsOn);
      digitalWrite(12, orangeLightsOn);
    }


    if (currentMillis - previousMillis > blinkInterval ) {
      previousMillis = currentMillis;
      if (lights == 1) {
        lights = 0;
      } else {
        lights = 1;
      }

      //purple lights blink
      if (purpleLightsOn == 1 ) {
        digitalWrite(2, lights);
        digitalWrite(3, lights);
      }


      //red lights blink
      if (redLightsOn == 1 ) {
        digitalWrite(4, lights);
        digitalWrite(5, lights);
      }

      //blue lights blink
      if (blueLightsOn == 1 ) {
        digitalWrite(6, lights);
        digitalWrite(7, lights);
      }

      //green lights blink
      if (greenLightsOn == 1) {
        digitalWrite(8, lights);
        digitalWrite(9, lights);
      }

      //orange lights blink
      if (orangeLightsOn == 1 ) {
        digitalWrite(10, lights);
        digitalWrite(12, lights);
      }
    }
  }


  //game's over!
  if (millis() > gameTime && millis() < gameTime + 2400) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    tone(11, 900, endDuration);
    delay(endDuration);
    tone(11, 800, endDuration);
    delay(endDuration);
    tone(11, 700, endDuration);
    delay(endDuration);
    tone(11, 600, endDuration);
    delay( endDuration);
    tone(11, 500, endDuration);
    delay( endDuration);
    tone(11, 400, endDuration);
    delay(endDuration);
    tone(11, 300, 6 / 5 * endDuration);
    delay(6 / 5 * endDuration);
    tone(11, 200, 9 / 5 * endDuration);
    delay(9 / 5 * endDuration);
  }
}
