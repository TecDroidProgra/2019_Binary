/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 07, 2019
      |___|    |________/
-------------------------------------------------------------*/
#pragma once

#include <frc/commands/Command.h>


class LevelWrist : public frc::Command {
 public:
  LevelWrist();
  LevelWrist(double target);
  LevelWrist(double target,double speed);
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

 private:
	double m_target;
  double m_speed;
	double m_error = 0;
	static constexpr double kTolerance = 0.1;
	static constexpr double kP = -1.0 / 5.0;

	void Put(double target,double speed);

};
