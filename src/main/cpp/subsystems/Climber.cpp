// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Climber.h"

Climber::Climber()
{
    SetPower(0);

    m_climbBrake.Set(frc::DoubleSolenoid::kReverse);

    m_isClimbActivated = false;
    m_isClimbBrakeActivated = false;
    
    m_leftClimbMotor.RestoreFactoryDefaults();
    m_rightClimbMotor.RestoreFactoryDefaults();

    m_leftClimbPID.SetP(0);
    m_rightClimbPID.SetP(0);
}

void ClimberInit(void)
{

}

void Climber::Periodic() 
{

}

void Climber::SetPower(double power)
{
    m_leftClimbMotor.Set(power);
    m_rightClimbMotor.Set(power);
}

void Climber::ClimbBrakeExtend(void)
{
    m_climbBrake.Set(frc::DoubleSolenoid::kForward);
    m_isClimbBrakeActivated = true;
}

void Climber::ClimbBrakeRetract(void)
{
    m_climbBrake.Set(frc::DoubleSolenoid::kReverse);
    m_isClimbBrakeActivated = false;
}

bool Climber::GetHighHallEffect(void)
{

}

bool Climber::GetLowHallEffect(void)
{
    
}

bool Climber::IsClimbActivated(void)
{
    return m_isClimbActivated;
}

bool Climber::IsClimbBrakeActivated(void)
{
    return m_isClimbBrakeActivated;
}

