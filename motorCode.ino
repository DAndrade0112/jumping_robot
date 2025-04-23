// Motor control pins
const int motor1Pin1 = 2;  // Motor 1 control pin 1
const int motor1Pin2 = 3;  // Motor 1 control pin 2
const int motor2Pin1 = 4;  // Motor 2 control pin 1
const int motor2Pin2 = 5;  // Motor 2 control pin 2

void setup() {
  // Initialize motor control pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  
  // Motor 1 backward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  
  // Motor 2 backward
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  
}

void loop() {
  delay(5000); // Wait 5 seconds 
  
  // STOP both motors
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  
  while(1); // Freeze program 
}