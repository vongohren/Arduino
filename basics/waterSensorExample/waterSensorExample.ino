void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("{\"watervalue\":");
  Serial.print(analogRead(0));
  Serial.print("}");
  Serial.println("");
  delay(150000);
  Serial.print("{\"watervalue2\":");
  Serial.print(analogRead(1));
  Serial.print("}");
  Serial.println("");
  delay(150000);
}
