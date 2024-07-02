#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#define Time_STEP 64

using namespace webots;
int main(int argc,char **argv){
Robot *robot=new Robot();
Motor *leftMotor=robot->getMotor("left wheel motor");
Motor *rightMotor=robot->getMotor("right wheel motor");
leftMotor->setPosition(20.0);
rightMotor->setPosition(10.0);
while (robot->step(Time_STEP)!=-1)
delete robot;
return 0;
}