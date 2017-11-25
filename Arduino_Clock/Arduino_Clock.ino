//Sorry,ihr müsst das Programm um genau 0 Uhr starten
int Sekunden = 0;
int Minuten = 0;
int Stunden = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
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
      noTone(11);
      tone(6, 499, 140);
      delay(100);
    }
  }
}

