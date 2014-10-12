int val;
int redpin = 11;
int greenpin = 10;
int bluepin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
}

void loop() {
  val = Serial.read();
  if(val == 'R') {
    setColor(255,0,0);
  }
  if(val == 'B'){
    setColor(0,0,255);
  }
  if(val == 'Y'){
    setColor(255,255,0);
  }
  delay(1000);

  

}

void setColor(int red, int green, int blue) {
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
  analogWrite(redpin,red);
  analogWrite(greenpin,green);
  analogWrite(bluepin,blue);
}
    
