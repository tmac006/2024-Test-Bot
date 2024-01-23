// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"

Shooter::Shooter()
{
    m_shooterTop.          RestoreFactoryDefaults();
    m_shooterTopPID.       SetP(0.0);

    m_shooterBottom.       RestoreFactoryDefaults();
    m_shooterBottomPID.    SetP(0.0);

    m_shooterPivot.        RestoreFactoryDefaults();
    m_shooterPivotPID.     SetP(0.0);
    m_shooterPivotEncoder. SetPosition(0.0);

}

void Shooter::ShooterInit(void)
{

}

// This method will be called once per scheduler run
void Shooter::Periodic() 
{

}

//*****************SHOOTER***********************
void Shooter::SetShooterRPM(double rpm)
{
    m_shooterTop.Set(0);
}

void Shooter::SetShooterPower(double power)
{

}

void Shooter::SetIdle(bool idle)
{

}


double Shooter::GetShooterPower(void)
{

}

double Shooter::GetTopShooterPower(void)
{

}

double Shooter::GetBottomShooterPower(void)
{

}

double Shooter::GetShooterVelocity(void)
{

}

double Shooter::GetWantedShooterRPM(void)
{

}

double Shooter::GetCurrentShooterRPM(void)
{

}

bool Shooter::IsIdle(void)
{

}

//***********SHOOTER PIVOT***************

void Shooter::SetPivotAngle(double angle)
{

}

void Shooter::SetPivotPower(double power)
{

}

void Shooter::ResetPivotEncoder(void)
{

}


double Shooter::GetPivotAngle(void)
{

}

double GetPivotAngle(void)
{

}

int SetPivotEncoder(void)
{

}


bool GetTopPivotLimitSW(void)
{

}

bool GetBottomPivotLimitSW(void)
{
    
}