// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

#include "Constants.h"

class Shooter : public frc2::SubsystemBase 
{
 public:
  Shooter();
  void ShooterInit(void);
  void Periodic() override;

  //****SHOOTER****

  void   SetShooterRPM(double rpm);
  void   SetShooterPower(double power);
  void   SetIdle(bool idle);

  double GetShooterPower(void);
  double GetTopShooterPower(void);
  double GetBottomShooterPower(void);
  double GetShooterVelocity(void);
  double GetWantedShooterRPM(void);
  double GetCurrentShooterRPM(void);
  bool   IsIdle();

  //****SHOOTER PIVOT****

  void   SetPivotAngle(double angle);
  void   SetPivotPower(double power);
  void   ResetPivotEncoder(void);

  double GetPivotAngle(void);
  double GetPivotPower(void);
  int    SetPivotEncoder(void);

  bool   GetTopPivotLimitSW(void);
  bool   GetBottomPivotLimitSW(void);

 private:
  rev::CANSparkMax          m_shooterTop    {SHOOTER_TOP_CAN_ID, rev::CANSparkMax::MotorType::kBrushless};
  rev::SparkPIDController   m_shooterTopPID = m_shooterTop.GetPIDController();
  
  rev::CANSparkMax          m_shooterBottom {SHOOTER_BOTTOM_CAN_ID, rev::CANSparkMax::MotorType::kBrushless};
  rev::SparkPIDController   m_shooterBottomPID = m_shooterBottom.GetPIDController();
  
  rev::CANSparkMax          m_shooterPivot  {SHOOTER_PIVOT_CAN_ID, rev::CANSparkMax::MotorType::kBrushless};
  rev::SparkRelativeEncoder m_shooterPivotEncoder = m_shooterPivot.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor);
  rev::SparkPIDController   m_shooterPivotPID = m_shooterPivot.GetPIDController();

  double                    m_shooterRPM;
  double                    m_shooterPower;
  double                    m_pivotPower;
  double                    m_pivotAngle;
  bool                      m_isIdle;

  double                    m_shooterWantedRPM;
  double                    m_pivotWantedPower;
  double                    m_pivotWantedAngle;
};
