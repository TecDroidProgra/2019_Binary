/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 19, 2019
      |___|    |________/
-------------------------------------------------------------*/
#pragma once

#include <frc/commands/Command.h>


class MoveWrist : public frc::Command {
 public:
  MoveWrist();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

 private:
  double m_target;
	double m_error = 0;
  static constexpr double m_speed = 0.5;
	static constexpr double kTolerance = 0.1;
	static constexpr double kP = -1.0 / 5.0;
  
};
