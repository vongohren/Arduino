int val;
int ledpin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);

}

void loop() {
  val = Serial.read();
  if(val == 'R') {
    digitalWrite(ledpin,HIGH);
    Serial.println("Hello world");
    delay(1000);
    digitalWrite(ledpin,LOW);
  }
}
    
