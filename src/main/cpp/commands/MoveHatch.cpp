/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 17, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "commands/MoveHatch.h"
#include "Robot.h"
#include "RobotMap.h"
#include <frc/smartdashboard/SmartDashboard.h>


MoveHatch::MoveHatch() {
  Requires(&Robot::hatch);
}

void MoveHatch::Initialize() {
 
}

void MoveHatch::Execute() {

  auto& joystick = Robot::oi.GetJoystick(1);
  Robot::hatch.Set(joystick.GetRawButton(j_buttonA)-joystick.GetRawButton(j_buttonB));  

}

bool MoveHatch::IsFinished() { 
 
}

void MoveHatch::End() {
  
}

void MoveHatch::Interrupted() {
  
}
