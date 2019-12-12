int section1 = 4; // pin for first section
int section2 = 10; // pin for second section

void setup() {
  pinMode(section1, OUTPUT); // initialize first section
  pinMode(section2, OUTPUT); // initialize first section
}

void loop() {
  // for the first section
  digitalWrite(section1, HIGH); // turns ON heat
  delay(10000);                  // changing this changes HEATING time
  digitalWrite(section1, LOW);  // turns OFF heat
  delay(2000);                 // changing this changes COOLING time
  // for the second section
  digitalWrite(section2, HIGH); // turns ON heat
  delay(10000);                  // changing this changes HEATING time
  digitalWrite(section2, LOW);  // turns OFF heat
  delay(2000);                 // changing this changes COOLING time
}
