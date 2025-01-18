void Setup() {
  CAMERA.begin(115200);
  LINE.begin(115200);

}

void SetupIMU() {
  pinMode(IMU1, INPUT);
  pinMode(IMU2, INPUT);
  pinMode(IMU3, INPUT);
}

void SetupMotors() {
  pinMode(MOTOR1_DIR,OUTPUT);
  pinMode(MOTOR1_PWM,OUTPUT);
  pinMode(MOTOR1_A,INPUT);
  pinMode(MOTOR2_DIR,OUTPUT);
  pinMode(MOTOR2_PWM,OUTPUT);
  pinMode(MOTOR2_A,INPUT);
  pinMode(MOTOR3_DIR,OUTPUT);
  pinMode(MOTOR3_PWM,OUTPUT);
  pinMode(MOTOR3_A,INPUT);
  pinMode(MOTOR4_DIR,OUTPUT);
  pinMode(MOTOR4_PWM,OUTPUT);
  pinMode(MOTOR4_A,INPUT);
  pinMode(MOTOR_ENABLE_PIN, OUTPUT);
}