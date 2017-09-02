//
// Stuff done in initialisation of sketch
//

// Jetibox Start Screen
//
#define ABOUT_1 F(" RCT Jeti Tools")
#define ABOUT_2 F(" Dual HighTemp")

//
// Max screens in jetibox (navigating over this goes to start)
//
#define MAX_SCREEN 7

//
// Sensor ID (0x02) - Needs to be unique in a model
//
const unsigned char Jeti_SensorID4 = 0x06;

//
// Sensor variables & other init-stuff nede
//
int sensorSO = 8;
int sensorCS = 9;
int sensor2CS = 11;
int sensorCLK = 10;
long bootTime;
long nowTime;
long lastTime;
long timeSet = 0;
int temp1 = 0;
int temp2 = 0;

// Settings
int sensorAmount = 1;
int units = 0;
int sensNameMem1 = 0;
int sensNameMem2 = 1;

MAX6675 sensor(sensorCLK, sensorCS, sensorSO);
MAX6675 sensor2(sensorCLK, sensor2CS, sensorSO);
