int xPin = A0;
int xVal;
int yPin = A1;
int yVal;
int sPin = 7;
int sVal;
int speedPin = 3;
int dir1Pin = 4;
int dir2Pin = 2;
int motorSpeed;
int dt = 60;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  pinMode(speedPin, OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  digitalWrite(sPin, HIGH);  
  
}

void loop() {
  xVal = analogRead(xPin);
  Serial.println(xVal);
  delay(dt);
  motorSpeed = xVal * (255.0/1023.0);
  digitalWrite(dir1Pin, HIGH);
  digitalWrite(dir2Pin, LOW);
  analogWrite(speedPin, motorSpeed);
}
