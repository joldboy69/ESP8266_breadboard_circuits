


const int test = 2;
const int lol = 0;

void setup() {
  pinMode(test, OUTPUT);
  pinMode(lol, OUTPUT);
}

void loop() {
  digitalWrite(test, HIGH);
  digitalWrite(lol, LOW);
  delay(3000);
  digitalWrite(test, LOW);
  digitalWrite(lol, HIGH);
  delay(1000);
}
