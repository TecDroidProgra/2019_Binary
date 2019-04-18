/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February 19, 2019
      |___|    |________/
-------------------------------------------------------------*/
#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/DoubleSolenoid.h>
#include <frc/VictorSP.h>
#include "RobotMap.h" 

class Hatch : public frc::Subsystem {
 public:
  Hatch();
  void InitDefaultCommand() override;
  void StartCompressor();
  void StopCompressor();
  void Set(double value);

  private:
    frc::VictorSP m_hatch{p_hatch};
};
