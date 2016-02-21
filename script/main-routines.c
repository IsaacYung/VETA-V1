void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(10000); 
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(10000); 
  digitalWrite(12, LOW);
  delay(1000);
}
