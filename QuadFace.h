#ifndef QuadFace_h
#define QuadFace_h

#include "Arduino.h"
class QuadFace
{
  public:
    void turnLeft();
    void turnAround();
    void turnRight();
    void moveForward();
    void land();
    void takeOff();
    void moveForward2();
    void moveForward5();
    void moveForward10();
    void moveForwardx(unsigned int);
};

#endif