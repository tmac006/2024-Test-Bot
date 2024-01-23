// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Constants.h"

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>
#include <frc/PneumaticsModuleType.h>
#include <rev/CANSparkMax.h>

class Climber : public frc2::SubsystemBase {
 public:
  Climber();

  void SetPower(double power);

  void ClimbBrakeExtend(void);
  void ClimbBrakeRetract(void);

  bool GetHighHallEffect(void);
  bool GetLowHallEffect(void);

  bool IsClimbActivated(void);
  bool IsClimbBrakeActivated(void);

  void ClimberInit(void);

  void Periodic() override;

 private:
  rev::CANSparkMax        m_leftClimbMotor {CLIMBER_LEFT_CAN_ID, rev::CANSparkMax::MotorType::kBrushless};
  rev::SparkPIDController m_leftClimbPID = m_leftClimbMotor.GetPIDController();
  
  rev::CANSparkMax        m_rightClimbMotor {CLIMBER_RIGHT_CAN_ID, rev::CANSparkMax::MotorType::kBrushless};
  rev::SparkPIDController m_rightClimbPID = m_rightClimbMotor.GetPIDController();

  frc::DoubleSolenoid     m_climbBrake {PCM_CAN, frc::PneumaticsModuleType::CTREPCM, CLIMBER_BRAKE_ENGAGE_PCM, CLIMBER_BRAKE_DISENGAGE_PCM};

  bool                    m_isClimbActivated;
  bool                    m_isClimbBrakeActivated;
};
