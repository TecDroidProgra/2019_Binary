/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 02, 2019
      |___|    |________/
-------------------------------------------------------------*/

#include "commands/MoveArm.h"
#include <frc/SmartDashboard/SmartDashboard.h>
#include <frc/Preferences.h>
#include "Robot.h"

MoveArm::MoveArm() {
  Requires(&Robot::arm);
}

void MoveArm::Initialize() {}

void MoveArm::Execute() {
  auto& joystick = Robot::oi.GetJoystick(1);
  bool limitUp = Robot::arm.GetLimit(0).Get();
  bool limitDown = Robot::arm.GetLimit(1).Get();
  double angle = Robot::arm.GetEncoder().GetDistance();
  frc::Preferences *pref;
  pref = frc::Preferences::GetInstance();
  float arms = pref->GetFloat("s_arm",s_arm);
  frc::SmartDashboard::PutNumber("Arm Angle",angle);
  bool finalActive = Robot::drivetrain.GetFinal();
  
    Robot::arm.Set(((joystick.GetRawAxis(j_rightTrigger))*limitDown-joystick.GetRawAxis(j_leftTrigger)*limitUp)*arms-joystick.GetRawAxis(j_rightY)*0.6);  
  
}

bool MoveArm::IsFinished() { 
  return false; 
}

void MoveArm::End() {
  Robot::arm.Stop();
}

void MoveArm::Interrupted() {}
