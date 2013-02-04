#include "OperatorInput.h"
#include "HardwareSettings.h"
#include "Commands/JoyStickDriveCommand.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CancelAllCommand.h"
#include "WPIlib.h"
#include "CommandBasedRobot.h"

#define USE_SMART_DASHBOARD 1

OperatorInput *OperatorInput::instance = NULL;

OperatorInput::OperatorInput() : stickOne(DRIVE_STICK_PORT), stickTwo(CAM_STICK_PORT), stickThree(DASH_BOARD_PORT)
{
	stickOneTriggerButton = new JoystickButton( &stickOne, 1 );
	stickOneTriggerButton->WhenPressed( new JoyStickDriveCommand() );
	
	stickThreeTriggerButton = new JoystickButton (&stickThree, 1 );
	stickThreeTriggerButton->WhenPressed( new CancelAllCommand() );
	
	stickThreeButtonTwo = new JoystickButton (&stickThree, 2);
	stickThreeButtonTwo->WhenPressed( new AutonomousCommand() );
	
#ifdef USE_SMART_DASHBOARD
    autonomousButton = new InternalButton();
    autonomousButton->WhenPressed( new AutonomousCommand() );
    SmartDashboard::PutData( "AutonomousCommand", autonomousButton );

#endif
    
}



OperatorInput& OperatorInput::getInstance()
{
	if (instance == NULL)
		instance = new OperatorInput();
	return *instance;	
}
