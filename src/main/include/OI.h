/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 31, 2019
      |___|    |________/
-------------------------------------------------------------*/

#pragma once

#include <frc/Buttons/JoystickButton.h>
#include <frc/Joystick.h>
#include <frc/DigitalInput.h>
#include "RobotMap.h"
class OI {
public:
	OI();
	
	frc::Joystick& GetJoystick(int control);
	frc::DigitalInput& GetLimit();

private:
	frc::Joystick s_chasis{0};
    frc::Joystick s_arm{1};
    
	frc::JoystickButton b_shoot{&s_arm,j_rightBumper};
	frc::DigitalInput s_limit{p_limitIntake};

};