/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February, 07, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "commands/LevelWrist.h"

#include "Robot.h"
#include <cmath>


void LevelWrist::Put(double target,double speed) {
  Requires(&Robot::wrist);
  SetInterruptible(true);
	m_target = target;
	m_speed = speed;
} 
LevelWrist::LevelWrist(double target) {
	Put(target,1);
}

LevelWrist::LevelWrist(double target,double speed) {
	Put(target, speed);
}

void LevelWrist::Initialize() {

}

void LevelWrist::Execute() {

  frc::Preferences *pref;
  pref = frc::Preferences::GetInstance();
  float autos = pref->GetFloat("s_autowrist",s_autowrist);
  float gyroActive = Robot::wrist.GyroActive();
  
  double angle = Robot::wrist.GetGyro().GetAngle();
  

  if(gyroActive){
    m_error = (m_target - angle);
	  if (m_speed * kP * m_error >= m_speed) {
  		Robot::wrist.Set(-m_speed*autos);
  	} else {
	  	Robot::wrist.Set(-m_speed * kP * m_error);
	  };
  }
}

bool LevelWrist::IsFinished() {
  auto& joystick = Robot::oi.GetJoystick(1);
  return (
            joystick.GetY()>0
            ||std::fabs(m_error) <= kTolerance
          ); 
        /*|| IsTimedOut()*/; 
  }

void LevelWrist::End() {
  Robot::wrist.Set(0);
}

void LevelWrist::Interrupted() {
  Robot::wrist.Set(0);
}
