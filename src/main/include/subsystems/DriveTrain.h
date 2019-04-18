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
#include <frc/Drive/DifferentialDrive.h>
#include <frc/VictorSP.h>
#include <frc/AnalogInput.h>
#include <frc/SpeedControllerGroup.h>
#include "RobotMap.h"


namespace frc {
class Joystick;
}  

class DriveTrain : public frc::Subsystem {
 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void Drive(double leftAxis, double rightAxis,bool active);
  void Stop();
  bool GetFinal();
  void SetFinal(bool status);
 
  
 private:
  	frc::VictorSP m_leftBack{p_leftBack};
    frc::VictorSP m_leftFront{p_leftFront};
    frc::SpeedControllerGroup m_left{m_leftBack,m_leftFront};
   	frc::VictorSP m_rightBack{p_rightBack};
    frc::VictorSP m_rightFront{p_rightFront};
    frc::SpeedControllerGroup m_right{m_rightBack,m_rightFront};       
	frc::DifferentialDrive m_robotDrive{m_left,m_right};
    bool finalActive = false;
};


