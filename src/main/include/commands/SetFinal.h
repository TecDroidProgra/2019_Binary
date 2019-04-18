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

class SetFinal: public frc::Command {
 public:
  SetFinal(bool status);
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
 private:
  bool s_status = false;
};
