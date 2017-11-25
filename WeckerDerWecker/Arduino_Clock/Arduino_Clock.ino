int Sekunden = 0;
int Minuten = 0;
int Stunden = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1);
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
}

