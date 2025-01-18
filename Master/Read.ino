void ReadAll() {
  ReadSerial();
  ReadIMU();
}

void ReadSerial() {
  if (MASTER.avaiable()) {
    String msg = MASTER.readStringUntil('#');
    MASTER.clear();
  }
}

void ReadIMU() {
  imu1 = analogRead(IMU1);
  imu2 = analogRead(IMU2);
  imu3 = analogRead(IMU3);
}