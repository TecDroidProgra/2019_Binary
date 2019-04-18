/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 31, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "commands/Stream.h"

#include "Robot.h"
#include <frc/WPILib.h>
#include "Robotmap.h"
#include <frc/SmartDashboard/SmartDashboard.h>
#include <networktables/NetworkTable.h>
#include <networktables/NetworkTableInstance.h>
#include <networktables/NetworkTableEntry.h>

Stream::Stream() {
  Requires(&Robot::cam);
}

void Stream::Initialize() {
  isArm = false;
  clicked = false;
}

void Stream::Execute() {

  auto& joystick = Robot::oi.GetJoystick(0);


  if (joystick.GetRawButton(j_rightClick) && !clicked){
    clicked = true;
    
    if (isArm){
      Robot::cam.server.SetSource(Robot::cam.c_arm);
      isArm =false;
    }
    else{
      Robot::cam.server.SetSource(Robot::cam.c_body);
      isArm = true;
    }
  }
  else clicked = false;
}

bool Stream::IsFinished() { return false; }

void Stream::End() {}

void Stream::Interrupted() {}
