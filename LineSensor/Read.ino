void ReadLineSensors() {

  int counter = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        digitalWrite(S0, i);
        digitalWrite(S1, j);
        digitalWrite(S2, k);

        delayMicroseconds(1);

        LineSensorValue[counter]      = analogRead(A0);
        LineSensorValue[counter + 8]  = analogRead(A1);
        LineSensorValue[counter + 16] = analogRead(A2);
        LineSensorValue[counter + 24] = analogRead(A3);
        LineSensorValue[counter + 32] = analogRead(A4);
        LineSensorValue[counter + 40] = analogRead(A5);
        LineSensorValue[counter + 48] = analogRead(A6);
        LineSensorValue[counter + 56] = analogRead(A7);
        LineSensorValue[counter + 64] = analogRead(A8);
        LineSensorValue[counter + 72] = analogRead(A9);

        LineSensorValue[counter]      = LineSensorValue[counter]      < LineSensorTreshold[counter];
        LineSensorValue[counter + 8]  = LineSensorValue[counter + 8]  < LineSensorTreshold[counter + 8];
        LineSensorValue[counter + 16] = LineSensorValue[counter + 16] < LineSensorTreshold[counter + 16];
        LineSensorValue[counter + 24] = LineSensorValue[counter + 24] < LineSensorTreshold[counter + 24];
        LineSensorValue[counter + 32] = LineSensorValue[counter + 32] < LineSensorTreshold[counter + 32];
        LineSensorValue[counter + 40] = LineSensorValue[counter + 40] < LineSensorTreshold[counter + 40];
        LineSensorValue[counter + 48] = LineSensorValue[counter + 48] < LineSensorTreshold[counter + 48];
        LineSensorValue[counter + 56] = LineSensorValue[counter + 56] < LineSensorTreshold[counter + 56];
        LineSensorValue[counter + 64] = LineSensorValue[counter + 64] < LineSensorTreshold[counter + 64];
        LineSensorValue[counter + 72] = LineSensorValue[counter + 72] < LineSensorTreshold[counter + 72];

        counter++;
      }
    }
  }
}

void ReadLinePosition() {
  bool LinePosition[9] = {0,0,0,0,0,0,0,0,0};
  for (int i = 0; i < 10; i++) {  // Left Outside
    if (LineSensor[LeftOutside[i]]) LinePosition[0] = 1;
  }

  for (int i = 0; i < 10; i++) {  // Right Outside
    if (LineSensor[RightOutside[i]]) LinePosition[1] = 1;
  }

  for (int i = 0; i < 13; i++) {  // Back Outside
    if (LineSensor[BackOutside[i]]) LinePosition[2] = 1;
  }

  for (int i = 0; i < 5; i++) {  // Left Middle
    if (LineSensor[LeftMiddle[i]]) LinePosition[3] = 1;
  }

  for (int i = 0; i < 5; i++) {  // Right Middle
    if (LineSensor[RightMiddle[i]]) LinePosition[4] = 1;
  }

  for (int i = 0; i < 6; i++) {  // Back Middle
    if (LineSensor[BackMiddle[i]]) LinePosition[5] = 1;
  }
  
  for (int i = 0; i < 9; i++) {  // Front Outside
    if (LineSensor[FrontOutside[i]]) LinePosition[6] = 1;
  }
  
  for (int i = 0; i < 3; i++) {  // Front Middle
    if (LineSensor[FrontMiddle[i]]) LinePosition[7] = 1;
  }
  
  for (int i = 0; i < 15; i++) {  // Inside
    if (LineSensor[Inside[i]]) LinePosition[8] = 1;
  }
}