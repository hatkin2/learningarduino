const int SWITCH_PIN = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SWITCH_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(SWITCH_PIN);
  Serial.println(switchState);
  
}
