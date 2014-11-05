void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("{\"watervalue\":");
  Serial.print(analogRead(0));
  Serial.print("}");
  Serial.println("");
  delay(300000);

}
