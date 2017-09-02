//
// Jetibox navigation and button actions
//

// Button codes
// 224  RIGHT
// 112  LEFT
// 208  UP
// 176  DOWN
// 144  UP & DOWN
// 9    LEFT & RIGHT
//
case 224 : // RIGHT
if (current_screen != MAX_SCREEN)
{
  if (current_screen == 6) {
    EEPROM.write(0, units);
    EEPROM.write(1, sensNameMem1);
    EEPROM.write(2, sensNameMem2);
    EEPROM.write(3, sensorAmount);
    delay(200);
    resetFunc();
  } else {
    current_screen++;
  }
}
break;
case 112 : // LEFT
if (current_screen != 0) {
  current_screen--;
}
break;
case 208 : // UP
if (current_screen == 4) {
  if (sensNameMem1 < 8) {
    sensNameMem1++;
    current_screen = 4;
  } else {
    sensNameMem1 = 0;
    current_screen = 4;
  }
}
if (current_screen == 5) {
  if (sensNameMem2 < 8) {
    sensNameMem2++;
    current_screen = 5;
  } else {
    sensNameMem2 = 0;
    current_screen = 5;
  }
}
break;
case 176 : // DOWN
if (current_screen == 2) {
  sensorAmount++;
  if (sensorAmount > 2) {
    sensorAmount = 1;
  }
  current_screen = 2;
}
if (current_screen == 3) {
  units++;
  if (units > 1) {
    units = 0;
  }
  current_screen = 3;
}
if (current_screen == 4) {
  if (sensNameMem1 > 0) {
    sensNameMem1--;
  } else {
    sensNameMem1 = 8;
  }
  current_screen = 4;
}
if (current_screen == 5) {
  if (sensNameMem2 > 0) {
    sensNameMem2--;
  } else {
    sensNameMem2 = 8;
  }
  current_screen = 5;
}
break;
case 144 : // UP+DOWN
if (current_screen == 6) {
    units = 0;
    sensNameMem1 = 0;
    sensNameMem2 = 1;
    sensorAmount = 1;
    EEPROM.write(0, units);
    EEPROM.write(1, sensNameMem1);
    EEPROM.write(2, sensNameMem2);
    EEPROM.write(3, sensorAmount);
    delay(200);
    resetFunc();
  }
break;
case 96 : // LEFT+RIGHT
break;
