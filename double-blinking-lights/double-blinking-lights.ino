// red
int redLight = 12;

// blue
int blueLight = 2;

void setup() {
  // put your setup code here, to run once:
Serial.print("TEST");
  pinMode(redLight, OUTPUT);
  pinMode(blueLight, OUTPUT);

  digitalWrite(redLight, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  toggle(redLight);
  toggle(blueLight);
}

void toggle(int light) {

  int lightVal = digitalRead(light);

  digitalWrite(light, !lightVal);
  delay(500);
}
