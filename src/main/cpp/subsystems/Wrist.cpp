/*------------------------------------------------------------
   ___________  _______
  |___     ___||  ____  \
      |   |    | |    \  |      Property of TecDroid 3354
      |   |    | |     | |      Written by Esteban Padilla
      |   |    | |____/  |      January, 19, 2019
      |___|    |________/
-------------------------------------------------------------*/
#include "subsystems/Wrist.h"

#include "RobotMap.h"
#include "commands/MoveWrist.h"
#include <frc/AnalogGyro.h>
#include <frc/AnalogInput.h>
#include <frc/PIDSource.h>

Wrist::Wrist() : frc::Subsystem("Wrist") {
}

void Wrist::InitDefaultCommand() {
    SetDefaultCommand(new MoveWrist());
}
void Wrist::Set(double value){
  m_wrist.Set(value);
  
}

frc::AnalogGyro& Wrist::GetGyro(){
    return s_gyro;
}

bool Wrist::GyroActive(){
    return true;
}
frc::DigitalInput& Wrist::GetHall(){
  return s_hall;
}