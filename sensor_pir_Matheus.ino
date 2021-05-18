int pir = 10;
int buzzer = 9;

void setup() {
pinMode(pir, INPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(pir) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  }
  else {
    digitalWrite(buzzer, LOW);
    }

}
