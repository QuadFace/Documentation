#include "Arduino.h"
#include "QuadFace.h"
const int time;
const int left;
const int forward;
const int set;
void QuadFace::turnLeft()
{
  [time, (0, left, 0)]
}
void QuadFace::turnAround()
{
  [time, (0, left*2 , 0)]
}
void QuadFace::turnRight()
{
  [time, (0,-left, 0)]
}
void QuadFace::moveForward(){
  [time, (0, forward, 0)]
}
void QuadFace::land(){
 [time, (-set, 0, 0)]
}
void QuadFace::takeOff(){
  [time, (set, 0, 0)]
}
void QuadFace::moveForward2(){
  [time, (0, 2*forward, 0)]
}
void QuadFace::moveForward5(){
  [time, (0, 5*forward, 0)]
}
void QuadFace::moveForward10(){
  [time, (0, 10*forward, 0)]
}
void QuadFace::moveForwardx(unsigned int x){
 [time, (0, x*forward, 0)]
}