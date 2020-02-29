#ifndef __ECOTRONS_RS232_TELEMETRY__
#define __ECOTRONS_RS232_TELEMETRY__

#include "Particle.h"

class ECOTRONSRS232telemetry
{
public:
  ECOTRONSRS232telemetry(USARTSerial *serial);

  void begin();

  void flush();

  void onSerialData();

  // Getters
  time_t getTimestamp();

  float getRPM();
  float getMap();
  float getTPS();
  float getECT();
  float getIAT();
  float getO2S();
  float getSpark();
  float getFuelPW1();
  float getFuelPW2();
  float getUbAdc();

private:
  USARTSerial * _serial;
  time_t _time;
  float _rpm;
  float _map;
  float _tps;
  float _ect;
  float _iat;
  float _o2s;
  float _spark;
  float _fuelpw1;
  float _fuelpw2;
  float _ubadc;
  float _interpretValue(uint8_t high, uint8_t low, float factor, float offset);
};

#endif
