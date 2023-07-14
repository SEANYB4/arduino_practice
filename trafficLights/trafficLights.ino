

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // GREEN
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  // AMBER
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(7, LOW);
  // RED
  digitalWrite(8, HIGH);
  delay(5000);
  // AMBER
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(7, LOW);
}
