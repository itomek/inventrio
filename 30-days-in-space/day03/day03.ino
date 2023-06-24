// Day 03

int redLed = 12;
int switch1 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(switch1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int switchVal = digitalRead(switch1);

  digitalWrite(redLed, switchVal);

  if (switchVal == LOW) {
    return;
  }

  delay(1000);

  int count = 10;

  for (int i = 0; i < count; i++) {
    
    digitalWrite(redLed, LOW);

    delay(100);
    digitalWrite(redLed, HIGH);
  }
}
