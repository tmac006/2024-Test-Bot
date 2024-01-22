#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/DigitalInput.h>
#include "Constants.h"

class AMPeratius : public frc2::SubsystemBase {
 public: //AMPeratius Shortened To AP cause I aint writing all that
  AMPeratius();
  
  void   AMPeratiusInit(void);
  //Meaty Stuff
  void   SetAPPower(double power);
  void   SetAPAngle(double angle);
  double GetAPPower(void);
  double GetAPAngle(void);
  double GetCurrentAPAngle(void);
  //Limit Switches
  bool   GetTopAPLimitSW(void);
  bool   GetBotAPLimitSW(void);
  //Encoders
  void   ResetAPEncoder(void);
  int    GetAPEncoder(void);

  
  void Periodic() override;

 private:
    frc::DigitalInput m_topAPLimitSwitch    {AP_TOP_LIMIT_SWITCH};
    frc::DigitalInput m_botAPLimtSwitch     {AP_BOT_LIMIT_SWITCH};


    double m_APAngle;
    double m_APPower;
    double m_wantedAPAngle;
    

  
  
};
