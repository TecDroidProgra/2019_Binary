/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 19, 2019
      |___|    |________/
-------------------------------------------------------------*/
#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/VictorSp.h>
#include "RobotMap.h"
#include <frc/Timer.h>

class Intake : public frc::Subsystem {
 public:
  Intake();
  void InitDefaultCommand() override;
  void Stop();
  void Set(double value);
  void StartTime();
  void StopTime();
  double GetTime();
 private:
  
  frc::VictorSP m_intake{p_intake};
  frc::Timer timer;

};
