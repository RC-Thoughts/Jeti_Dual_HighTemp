//
// Stuff that needs to be inside void setup()
//

// Sensor Name
// Serial speed is 10240 for Pro Mini 3.3V due software serial
// Serial speed is 9800 for Pro Mini 5V due software serial
JB.Init(F("RCT DHT"), JETI_RX, 9900);

// Set MAX times
bootTime = millis();
lastTime = bootTime;

// Read units - default to Celsius
units = EEPROM.read(0);
if (units < 0 or units > 1) {
  units = 0;
}

// Read sensornames - default to "Temp-1" and "Temp-2"
sensNameMem1 = EEPROM.read(1);
if (sensNameMem1 < 0 or sensNameMem1 > 8 ) {
  sensNameMem1 = 0;
}
sensNameMem2 = EEPROM.read(2);
if (sensNameMem2 < 0 or sensNameMem2 > 8 ) {
  sensNameMem2 = 1;
}

// Read sensor amount - default to one
sensorAmount = EEPROM.read(3);
if (sensorAmount < 1 or sensorAmount > 2) {
  sensorAmount = 1;
}

// Define Jeti Sensor value name & unit & variable & precision (decimals)
// JB.setValue30(JB.addData(F("NAME"), F("UNIT")), &VARIABLE, DEC);
//
// Sensor-value ranges:
// JB.setValue6 =   -31 to 31               (Variable is uint8_t)
// JB.setValue14 =  -8191 to 8191           (Variable is int)
// JB.setValue30 =  -536870911 to 536870911 (Variable is long)

// Set sensor 1 with correct name
if (units == 0) {
  if (sensNameMem1 == 0) {
    JB.setValue14(JB.addData(F("Temp-1"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 1) {
    JB.setValue14(JB.addData(F("Temp-2"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 2) {
    JB.setValue14(JB.addData(F("Cylinder"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 3) {
    JB.setValue14(JB.addData(F("Left Cyl"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 4) {
    JB.setValue14(JB.addData(F("Right Cyl"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 5) {
    JB.setValue14(JB.addData(F("Exhaust"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 6) {
    JB.setValue14(JB.addData(F("Left Exh"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 7) {
    JB.setValue14(JB.addData(F("Right Exh"), F("\xB0\x43")), &temp1, 0);
  }
  if (sensNameMem1 == 8) {
    JB.setValue14(JB.addData(F("Turbine"), F("\xB0\x43")), &temp1, 0);
  }
}
if (units == 1) {
  if (sensNameMem1 == 0) {
    JB.setValue14(JB.addData(F("Temp-1"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 1) {
    JB.setValue14(JB.addData(F("Temp-2"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 2) {
    JB.setValue14(JB.addData(F("Cylinder"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 3) {
    JB.setValue14(JB.addData(F("Left Cyl"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 4) {
    JB.setValue14(JB.addData(F("Right Cyl"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 5) {
    JB.setValue14(JB.addData(F("Exhaust"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 6) {
    JB.setValue14(JB.addData(F("Left Exh"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 7) {
    JB.setValue14(JB.addData(F("Right Exh"), F("\xB0\x46")), &temp1, 0);
  }
  if (sensNameMem1 == 8) {
    JB.setValue14(JB.addData(F("Turbine"), F("\xB0\x46")), &temp1, 0);
  }
}

// If sensor amount is 2 Sst sensor 2 with correct name
if (sensorAmount == 2) {
  if (units == 0) {
    if (sensNameMem2 == 0) {
      JB.setValue14(JB.addData(F("Temp-1"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 1) {
      JB.setValue14(JB.addData(F("Temp-2"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 2) {
      JB.setValue14(JB.addData(F("Cylinder"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 3) {
      JB.setValue14(JB.addData(F("Left Cyl"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 4) {
      JB.setValue14(JB.addData(F("Right Cyl"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 5) {
      JB.setValue14(JB.addData(F("Exhaust"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 6) {
      JB.setValue14(JB.addData(F("Left Exh"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 7) {
      JB.setValue14(JB.addData(F("Right Exh"), F("\xB0\x43")), &temp2, 0);
    }
    if (sensNameMem2 == 8) {
      JB.setValue14(JB.addData(F("Turbine"), F("\xB0\x43")), &temp2, 0);
    }
  }
  if (units == 1) {
    if (sensNameMem2 == 0) {
      JB.setValue14(JB.addData(F("Temp-1"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 1) {
      JB.setValue14(JB.addData(F("Temp-2"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 2) {
      JB.setValue14(JB.addData(F("Cylinder"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 3) {
      JB.setValue14(JB.addData(F("Left Cyl"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 4) {
      JB.setValue14(JB.addData(F("Right Cyl"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 5) {
      JB.setValue14(JB.addData(F("Exhaust"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 6) {
      JB.setValue14(JB.addData(F("Left Exh"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 7) {
      JB.setValue14(JB.addData(F("Right Exh"), F("\xB0\x46")), &temp2, 0);
    }
    if (sensNameMem2 == 8) {
      JB.setValue14(JB.addData(F("Turbine"), F("\xB0\x46")), &temp2, 0);
    }
  }
}
