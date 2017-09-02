//
// This is the main loop where the work is done
//
// May the flow be with you

// Set time now
nowTime = millis();
// Set time at start to + 1 second to let MAX6675 settle
if (nowTime > (bootTime + 1000)) {
  timeSet = 1;
}
// If time MAX6675 is settled run
if (timeSet == 1) {
  // Run only with intervalls(MAX6675 is slow)
  if (lastTime < nowTime) {
    if (units == 0) {
      temp1 = (int) sensor.readCelsius();
    }
    if (units == 1) {
      temp1 = (int) sensor.readFahrenheit();
    }
    if (sensorAmount == 2) {
      if (units == 0) {
        temp2 = (int) sensor2.readCelsius();
      }
      if (units == 1) {
        temp2 = (int) sensor2.readFahrenheit();
      }
    }
    // Set timestampt to 250ms in future
    lastTime = (nowTime + 250);
  }
} else {
  temp1 = 0;
  temp2 = 0;
}
