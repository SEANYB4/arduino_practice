
int delayValue = 500;
int ledPin = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(delayValue);
  digitalWrite(ledPin, LOW);
  delay(delayValue);

}
