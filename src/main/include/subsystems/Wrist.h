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
#include <frc/PIDSource.h>
#include <frc/AnalogGyro.h>
#include <frc/DigitalInput.h>

class Wrist : public frc::Subsystem {
 public:
  Wrist();
  void InitDefaultCommand() override;
  void Set(double value);
  frc::AnalogGyro& GetGyro();
  bool GyroActive();
  frc::DigitalInput& GetHall();

 private:
    frc::VictorSP m_wrist{p_wrist};
    frc::DigitalInput s_hall{p_hall};
    frc::AnalogGyro s_gyro{0};

};
