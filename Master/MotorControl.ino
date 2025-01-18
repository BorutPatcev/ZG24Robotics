void motorSetSpeed(int n, int speed) {

  speed = int( speed * 2.55 );

  if (speed < 0) digitalWrite(MOTOR_PINS[n][0], 1 - MOTOR_PINS[n][2]);
  else digitalWrite(MOTOR_PINS[n][0], MOTOR_PINS[n][2]);

  analogWrite(MOTOR_PINS[n][1], abs(speed));

}

void go(int speed, float angle, float rotation, int speedLimit) {
  
  // 0 - FL   1 - FR   2 - BR   3 - BL
  
  float sinF = sin(toRad( angle ));
  float cosF = cos(toRad( angle ));
  float motorSpeed[4];

  motorSpeed[0] = rotation + speed * 0.5774 * ( (1.7321 * sinF) + cosF );
  motorSpeed[1] = rotation + speed * 0.5774 * ( (1.7321 * sinF) - cosF );
  motorSpeed[2] = rotation + speed * 0.7071 * ( -sinF - cosF );
  motorSpeed[3] = rotation + speed * 0.7071 * ( -sinF + cosF );

  float maxSpeed = 0;
  for (int i = 0; i < 4; i++) if (abs(motorSpeed[i]) > maxSpeed) maxSpeed = abs(motorSpeed[i]);

  for (int i = 0; i < 4; i++) {

    if (maxSpeed <= MAX_SPEED) motorSetSpeed(i, motorSpeed[i]);
    else motorSetSpeed(i, motorSpeed[i] / maxSpeed * MAX_SPEED);

  }

}