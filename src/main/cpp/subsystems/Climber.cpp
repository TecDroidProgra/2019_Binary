/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      February 25, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "subsystems/Climber.h"
#include <frc/WPILib.h>
#include "RobotMap.h"
#include "commands/Climb.h"
#include <frc/ADXRS450_Gyro.h>

Climber::Climber() : frc::Subsystem("Climber") {
	m_front.SetInverted(false);
	m_back.SetInverted(false);
}

void Climber::InitDefaultCommand() {
  SetDefaultCommand(new Climb);
}

void Climber::SetFront(double value) {
	m_front.Set(value);
}
void Climber::SetBack(double value){
    m_back.Set(value);
}

frc::ADXRS450_Gyro& Climber::GetGyro(){
    return m_gyro;
}
