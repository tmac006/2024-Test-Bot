#include "subsystems/Intake.h"
#include "frc/smartdashboard/SmartDashboard.h"

Intake::Intake()
{
    m_isIntaking = true;
}

void Intake::IntakeInit(void)
{
    frc::SmartDashboard::PutNumber("FRONT_INTAKE_POWER", 0.6);
}

void Intake::Deploy(void)
{
    if(!m_isIntaking)
    {
        m_doubleSolinoid.Set(frc::DoubleSolenoid::kForward);
        m_isIntaking = true;
    }
}
void Intake::Retract(void)
{
    if(m_isIntaking)
    {
        m_doubleSolinoid.Set(frc::DoubleSolenoid::kReverse);
        m_isIntaking = false;
    }
}

void Intake::SetPower(double power)
{
    m_intakeMotor.Set(power);
}

double Intake::GetPower(void)
{
    return m_intakeMotor.Get();
}

bool Intake::GetIsIntaking(void)
{
    return m_isIntaking;
}

void Intake::Periodic() 
{

}