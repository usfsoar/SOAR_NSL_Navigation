#include "Arduino.h"

extern bool initComms();
extern bool piInit();


extern void setCommAltitude(int alt), setCommDistance(int dist), setDofError(bool er), setGpsError(bool er), setgpsHasFix(bool er);