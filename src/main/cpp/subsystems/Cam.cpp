/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 31, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "subsystems/Cam.h"

#include "RobotMap.h"
#include "commands/Stream.h"

Cam::Cam() : frc::Subsystem("Cam") {}

void Cam::InitDefaultCommand() {
  SetDefaultCommand(new Stream());
}
