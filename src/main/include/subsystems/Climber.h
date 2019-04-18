/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February 25, 2019
      |___|    |________/
-------------------------------------------------------------*/
#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/VictorSP.h>
#include <frc/WPILib.h>
#include "RobotMap.h"
#include <frc/ADXRS450_Gyro.h>
#include <frc/SPI.h>

class Climber : public frc::Subsystem {
 public:
  Climber();
  void InitDefaultCommand() override;
  void SetFront(double value);
  void SetBack(double value);
  frc::ADXRS450_Gyro& GetGyro();
 private:
    frc::VictorSP m_front{p_climberFront};
    frc::VictorSP m_back{p_climberBack};
    frc::ADXRS450_Gyro m_gyro{frc::SPI::Port::kOnboardCS1};
};
