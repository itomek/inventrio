// Day 04

int bLed = 12; // blue
int gLed = 11; // green
int rLed = 10; // red

int bSwitch = 4; // blue (1)
int gSwitch = 3; // green (2)
int rSwitch = 2; // red (3)

void setup() {
  // put your setup code here, to run once:

  pinMode(bLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(rLed, OUTPUT);

  pinMode(bSwitch, INPUT);
  pinMode(gSwitch, INPUT);
  pinMode(rSwitch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(bLed, digitalRead(bSwitch));
  digitalWrite(gLed, digitalRead(gSwitch));
  digitalWrite(rLed, digitalRead(rSwitch));

}
