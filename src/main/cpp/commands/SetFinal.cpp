/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 17, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "commands/SetFinal.h"

#include "Robot.h"


SetFinal::SetFinal(bool status) {
  Requires(&Robot::drivetrain);
  s_status = status;
}

void SetFinal::Initialize() {

}

void SetFinal::Execute() {
  Robot::drivetrain.SetFinal(s_status);
}	

bool SetFinal::IsFinished() {}

void SetFinal::End() {}

void SetFinal::Interrupted() {}
