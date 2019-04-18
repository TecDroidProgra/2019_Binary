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

class Climb : public frc::Command {
 public:
  Climb();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
