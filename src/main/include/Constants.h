#pragma once


//CAN VALUES
#define PCM_CAN 0

#define SHOOTER_TOP_CAN_ID 5
#define SHOOTER_BOTTOM_CAN_ID 6
#define SHOOTER_PIVOT_CAN_ID 7

#define CLIMBER_LEFT_CAN_ID 0
#define CLIMBER_RIGHT_CAN_ID 0
#define CLIMBER_BRAKE_ENGAGE_PCM 0
#define CLIMBER_BRAKE_DISENGAGE_PCM 0

//Limit Switches
#define SHOOTER_TOP_LIMIT_SWITCH 8
#define SHOOTER_BOTTOM_LIMIT_SWITCH 9

#define AP_TOP_LIMIT_SWITCH 3
#define AP_BOT_LIMIT_SWITCH 4

//PCM PLACEHOLDER VALUES 
#define INTAKE_DEPLOY_PCM 1
#define INTAKE_RETRACT_PCM 2

namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;

}  // namespace OperatorConstants
