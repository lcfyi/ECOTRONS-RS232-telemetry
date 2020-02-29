#include "ECOTRONS-RS232-telemetry.h"

// We'll pass it Serial1 to read data
ECOTRONSRS232telemetry ecu(&Serial1);
void serialData();
Timer timer(1, serialData);

void setup() {
    timer.start();
    ecu.begin();
    Serial.begin(9600);
}

void loop() {
    // Every second, print the timestamp of the data
    // and the RPM value
    Serial.println(ecu.getTimestamp());
    Serial.println(ecu.getRPM());
    delay(1000);
}

void serialData()
{
  // We'll have to wrap this in a static function
  ecu.onSerialData();
}