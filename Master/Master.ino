#define MAX_SPEED 70


#define CAMERA Serial8
#define LINE Serial7

#define IMU1 A15
#define IMU2 A16
#define IMU3 A17

#define MOTOR_ENABLE_PIN 8
#define MOTOR1_DIR 1
#define MOTOR1_PWM 0
#define MOTOR1_A A10
#define MOTOR2_DIR 3
#define MOTOR2_PWM 2
#define MOTOR2_A A11
#define MOTOR3_DIR 6
#define MOTOR3_PWM 7
#define MOTOR3_A A13
#define MOTOR4_DIR 4
#define MOTOR4_PWM 5
#define MOTOR4_A A12

int MOTOR_PINS[4][3] = {{MOTOR1_DIR, MOTOR1_PWM, 0},
                        {MOTOR2_DIR, MOTOR2_PWM, 0},
                        {MOTOR3_DIR, MOTOR3_PWM, 0},
                        {MOTOR4_DIR, MOTOR4_PWM, 0}};

float imu1, imu2, imu3;
float corr_imu1, corr_imu2, corr_imu3;
float heading;
bool pause = true;

void setup() {
  Setup();
}

void loop() {

}

void delayMS(int timeMS) {
  unsigned long delayTimer = millis();
  while (delayTimer + timeMS > millis()) {
    ReadAll();
    if (pause) break;
  }
}
