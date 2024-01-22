#pragma once

#include <frc2/command/SubsystemBase.h>
#include "Constants.h"
#include <frc/DoubleSolenoid.h>
#include <frc/PneumaticsModuleType.h>
#include "rev/CANSparkMax.h"

class Intake : public frc2::SubsystemBase 
{
 public:

    Intake();
    void IntakeInit(void);
    void Deploy(void);
    void Retract(void);
    void SetPower(double power);
    //bool GetLimitSwitch(void); //Not Sure If using Limit Switch
    double GetPower(void);
    bool GetIsIntaking(void);
    void Periodic() override;

    

 private:
  //rev::SparkRelativeEncoder m_encoder = m_intakeMotor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor); //Not Sure If Using Encoder?
  rev::CANSparkMax m_intakeMotor {1, rev::CANSparkMax::MotorType::kBrushless};
  frc::DoubleSolenoid m_doubleSolinoid{1, frc::PneumaticsModuleType::CTREPCM, INTAKE_DEPLOY_PCM, INTAKE_RETRACT_PCM};
  
  bool m_isIntaking;
  
 

};