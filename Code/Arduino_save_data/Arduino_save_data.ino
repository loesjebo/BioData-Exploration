// THIS CODE GOES ON THE ARDUINO IDE:
// Make sure to adjust your Arduino Port and Board settings on "Tools".

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  delay(20);
}
