const int ENABLE_MOTOR_A_PIN = 9;
const int MOTOR_A_IN1_PIN = 6;
const int MOTOR_A_IN2_PIN = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(ENABLE_MOTOR_A_PIN, OUTPUT);
  pinMode(MOTOR_A_IN1_PIN, OUTPUT);
  pinMode(MOTOR_A_IN2_PIN, OUTPUT);
  
  // set up initial rotation direction

  analogWrite(ENABLE_MOTOR_A_PIN, 1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MOTOR_A_IN1_PIN, HIGH);
  digitalWrite(MOTOR_A_IN2_PIN, LOW);
}
