#define Master Serial7

#define ENABLE_PIN 33
#define S0 1
#define S1 2
#define S2 3

bool ENABLED = false;
float LineSensorValue[80];
float LineSensorTreshold[80];
bool LineSensor[80];
int Line;
int LeftOutside[10] = {},
    RightOutside[10] = {},
    BackOutside[13] = {},
    LeftMiddle[5] = {},
    RightMiddle[5] = {},
    BackMiddle[6] = {},
    FrontOutside[9] = {},
    FrontMiddle[3] = {},
    Inside[15] = {};

void setup() {
  
}

void loop() {

}
