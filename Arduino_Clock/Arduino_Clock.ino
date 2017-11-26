//Sorry,ihr müsst das Programm um genau 0 Uhr starten
int Sekunden = 0;
int Minuten = 0;
int Stunden = 0;
const int buttonPin = 8;
int buttonState = 0;
#include <Servo.h>
int pos = 0;
Servo myservo;
void setup() {
  myservo.attach(6);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  delay(100);
  Sekunden = Sekunden + 1;
  Serial.print(Stunden);
  Serial.print(" : ");
  Serial.print(Minuten);
  Serial.print(" : ");
  Serial.println(Sekunden);
  if (Sekunden > 59) {
    Minuten = Minuten + 1;
    Sekunden = 0;
  }
  if (Minuten > 59) {
    Stunden = Stunden + 1;
    Minuten = 0;
  }
  if (Stunden > 23)  {
    Stunden = 0;
  }
  //Weck-Zeit hier bearbeiten
  //Wenn "if (Stunden > 6)" und "if (Minuten > 29) da steht, klingelt der Wecker um 7:30
  if (Stunden > -1) {
    if (Minuten > 0) {
      tone(13, 499, 140);
    }

    if (buttonState == LOW) {
      noTone(13);
      while (true) {};
    }
    if (Stunden > -1) {
      if (Minuten > 1) {
        for (pos = 0; pos <= 90; pos += 1) {
          myservo.write(pos);
          delay(15);
          }
        }
      }

    }
  }



