//
// Build Jetibox screens
//

case 0 : {
  JB.JetiBox_P(ABOUT_1, ABOUT_2);
  break;
}
case 1 : {
  msg_line1[0] = 0; msg_line2[0] = 0;
  // Line 1
  if (sensNameMem1 == 0) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-1: "));
  }
  if (sensNameMem1 == 1) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-2: "));
  }
  if (sensNameMem1 == 2) {
    strcat_P((char*)&msg_line1, (const char*)F("Cylinder: "));
  }
  if (sensNameMem1 == 3) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Cyl: "));
  }
  if (sensNameMem1 == 4) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Cyl: "));
  }
  if (sensNameMem1 == 5) {
    strcat_P((char*)&msg_line1, (const char*)F("Exhaust: "));
  }
  if (sensNameMem1 == 6) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Exh: "));
  }
  if (sensNameMem1 == 7) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Exh: "));
  }
  if (sensNameMem1 == 8) {
    strcat_P((char*)&msg_line1, (const char*)F("Turbine: "));
  }
  temp[0] = 0;
  floatToString((char*)&temp, temp1, 0);
  strcat((char*)&msg_line1, (char*)&temp);
  if (units == 0) {
    strcat_P((char*)&msg_line1, (const char*)F("\xB0\x43"));
  }
  if (units == 1) {
    strcat_P((char*)&msg_line1, (const char*)F("\xB0\x46"));
  }
  // Line 2
  if (sensNameMem2 == 0) {
    strcat_P((char*)&msg_line2, (const char*)F("Temp-1: "));
  }
  if (sensNameMem2 == 1) {
    strcat_P((char*)&msg_line2, (const char*)F("Temp-2: "));
  }
  if (sensNameMem2 == 2) {
    strcat_P((char*)&msg_line2, (const char*)F("Cylinder: "));
  }
  if (sensNameMem2 == 3) {
    strcat_P((char*)&msg_line2, (const char*)F("Left Cyl: "));
  }
  if (sensNameMem2 == 4) {
    strcat_P((char*)&msg_line2, (const char*)F("Right Cyl: "));
  }
  if (sensNameMem2 == 5) {
    strcat_P((char*)&msg_line2, (const char*)F("Exhaust: "));
  }
  if (sensNameMem2 == 6) {
    strcat_P((char*)&msg_line2, (const char*)F("Left Exh: "));
  }
  if (sensNameMem2 == 7) {
    strcat_P((char*)&msg_line2, (const char*)F("Right Exh: "));
  }
  if (sensNameMem2 == 8) {
    strcat_P((char*)&msg_line2, (const char*)F("Turbine: "));
  }
  temp[0] = 0;
  floatToString((char*)&temp, temp2, 0);
  strcat((char*)&msg_line2, (char*)&temp);
  if (units == 0) {
    strcat_P((char*)&msg_line2, (const char*)F("\xB0\x43"));
  }
  if (units == 1) {
    strcat_P((char*)&msg_line2, (const char*)F("\xB0\x46"));
  }
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case 2 : {
  msg_line1[0] = 0; msg_line2[0] = 0;
  strcat_P((char*)&msg_line1, (const char*)F("Sensor count: "));
  temp[0] = 0;
  floatToString((char*)&temp, sensorAmount, 0);
  strcat((char*)&msg_line1, (char*)&temp);
  strcat_P((char*)&msg_line2, (const char*)F("Change: Dn"));
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case 3 : {
  msg_line1[0] = 0; msg_line2[0] = 0;
  strcat_P((char*)&msg_line1, (const char*)F("Units: "));
  if (units == 0) {
    strcat_P((char*)&msg_line1, (const char*)F("\xB0\x43 (EU)"));
  }
  if (units == 1) {
    strcat_P((char*)&msg_line1, (const char*)F("\xB0\x46 (US)"));
  }
  strcat_P((char*)&msg_line2, (const char*)F("Change: Dn"));
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case 4 : {
  msg_line1[0] = 0; msg_line2[0] = 0;
  strcat_P((char*)&msg_line1, (const char*)F("S-1: "));
  if (sensNameMem1 == 0) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-1"));
  }
  if (sensNameMem1 == 1) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-2"));
  }
  if (sensNameMem1 == 2) {
    strcat_P((char*)&msg_line1, (const char*)F("Cylinder"));
  }
  if (sensNameMem1 == 3) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Cyl"));
  }
  if (sensNameMem1 == 4) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Cyl"));
  }
  if (sensNameMem1 == 5) {
    strcat_P((char*)&msg_line1, (const char*)F("Exhaust"));
  }
  if (sensNameMem1 == 6) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Exh"));
  }
  if (sensNameMem1 == 7) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Exh"));
  }
  if (sensNameMem1 == 8) {
    strcat_P((char*)&msg_line1, (const char*)F("Turbine"));
  }
  strcat_P((char*)&msg_line2, (const char*)F("Change: Up/Dn"));
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case 5 : {
    msg_line1[0] = 0; msg_line2[0] = 0;
  strcat_P((char*)&msg_line1, (const char*)F("S-2: "));
  if (sensNameMem2 == 0) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-1"));
  }
  if (sensNameMem2 == 1) {
    strcat_P((char*)&msg_line1, (const char*)F("Temp-2"));
  }
  if (sensNameMem2 == 2) {
    strcat_P((char*)&msg_line1, (const char*)F("Cylinder"));
  }
  if (sensNameMem2 == 3) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Cyl"));
  }
  if (sensNameMem2 == 4) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Cyl"));
  }
  if (sensNameMem2 == 5) {
    strcat_P((char*)&msg_line1, (const char*)F("Exhaust"));
  }
  if (sensNameMem2 == 6) {
    strcat_P((char*)&msg_line1, (const char*)F("Left Exh"));
  }
  if (sensNameMem2 == 7) {
    strcat_P((char*)&msg_line1, (const char*)F("Right Exh"));
  }
  if (sensNameMem2 == 8) {
    strcat_P((char*)&msg_line1, (const char*)F("Turbine"));
  }
  strcat_P((char*)&msg_line2, (const char*)F("Change: Up/Dn"));
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case 6 : {
  msg_line1[0] = 0; msg_line2[0] = 0;
  strcat_P((char*)&msg_line1, (const char*)F("Reset or Save"));
  strcat_P((char*)&msg_line2, (const char*)F("Rst UpDn Save >"));
  JB.JetiBox((char*)&msg_line1, (char*)&msg_line2);
  break;
}
case MAX_SCREEN : {
  JB.JetiBox_P(ABOUT_1, ABOUT_2);
  break;
}
