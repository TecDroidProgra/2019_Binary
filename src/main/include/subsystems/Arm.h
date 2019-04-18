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
#include <frc/Encoder.h>
#include <frc/DigitalInput.h>

#include "RobotMap.h"

class Arm : public frc::Subsystem {
 public:
  Arm();
  void InitDefaultCommand() override;
  void Set(double value);
  void Stop();
  bool EncoderActive();
  frc::Encoder& GetEncoder();
  frc::DigitalInput& GetLimit(int limit);
 private: 
    frc::VictorSP m_arm{p_arm};
    frc::Encoder s_encoder{p_encoderArmA, p_encoderArmB, false, frc::Encoder::k4X};
    frc::DigitalInput s_limitUp{p_limitArmUp};
    frc::DigitalInput s_limitDown{p_limitArmDown};
};
