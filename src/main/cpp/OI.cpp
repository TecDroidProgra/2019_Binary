/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 17, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "OI.h"
#include "commands/Shoot.h"
#include "commands/LevelArm.h"
#include "commands/MoveHatch.h"
#include "commands/SetFinal.h"
#include "Robot.h"
OI::OI() {
	b_shoot.WhenPressed(new Shoot());
   // b_top.WhenPressed(new LevelArm(140.0,1));
   // b_mid.WhenPressed(new LevelArm(80.0,1));
   // b_bot.WhenPressed(new LevelArm(20.0,1));
   // b_final.WhenPressed(new SetFinal(true));
   // b_nfinal.WhenPressed(new SetFinal(false));

}


frc::Joystick& OI::GetJoystick(int control) {
    if (control){
        return s_arm;
    }
    else{
	    return s_chasis;
    }
}
frc::DigitalInput& OI::GetLimit() {
	return s_limit;
}