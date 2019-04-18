/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 06, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "commands/DriveChasis.h"

#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Preferences.h>

DriveChasis::DriveChasis() {
  Requires(&Robot::drivetrain);
}

void DriveChasis::Initialize() {}

void DriveChasis::Execute() {
  auto& ruben = Robot::oi.GetJoystick(0);
  frc::Preferences *pref;
  pref = frc::Preferences::GetInstance();
  float chasisY = pref->GetFloat("s_chasisY",s_chasisY);
  float chasisX = pref->GetFloat("s_chasisX",s_chasisX);

  Robot::drivetrain.Drive((ruben.GetRawAxis(j_leftY)+ruben.GetRawAxis(j_rightY)*0.6)*chasisY,
                          (ruben.GetRawAxis(j_leftX)+ruben.GetRawAxis(j_rightX)*0.6)*chasisX,
                          ruben.GetRawButton(j_rightClick));
   
  
  

}	

bool DriveChasis::IsFinished() {}

void DriveChasis::End() {}

void DriveChasis::Interrupted() {}
