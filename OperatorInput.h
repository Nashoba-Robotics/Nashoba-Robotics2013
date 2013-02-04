#ifndef OPERATORINPUT_H
#define OPERATORINPUT_H
#define USE_SMART_DASHBOARD 1

#include "WPILib.h"


#define SNAP_TO_VALUE( snapValue, plusMinus, actualValue ) ( (((actualValue) > ((snapValue)-(plusMinus))) && ( (actualValue) < ((snapValue)+(plusMinus))))  ? (snapValue) : (actualValue) )

//! The operator input class 
class OperatorInput 
{
private:
	static OperatorInput *instance;
	Joystick stickOne;
	Joystick stickTwo;
	Joystick stickThree;
	
	JoystickButton *stickOneTriggerButton;
	JoystickButton *stickOnestickOneButtonTwo;
	JoystickButton *stickOneButtonTwo;
	JoystickButton *stickOneButtonThree;
	JoystickButton *stickOneButtonFour;
	JoystickButton *stickOneButtonFive;
	JoystickButton *stickOneButtonSix;
	JoystickButton *stickOneButtonSeven;
	JoystickButton *stickOneButtonEight;
	JoystickButton *stickOneButtonNine;
	JoystickButton *stickOneButtonTen;
	JoystickButton *stickOneButtonEleven;
	JoystickButton *stickOneButtonTwelve;
	
	JoystickButton *stickTwoTriggerButton;
	JoystickButton *stickTwoButtonOne;
	JoystickButton *stickTwoButtonTwo;
	JoystickButton *stickTwoButtonThree;
	JoystickButton *stickTwoButtonFour;
	JoystickButton *stickTwoButtonFive;
	JoystickButton *stickTwoButtonSix;
	JoystickButton *stickTwoButtonSeven;
	JoystickButton *stickTwoButtonEight;
	JoystickButton *stickTwoButtonNine;
	JoystickButton *stickTwoButtonTen;
	JoystickButton *stickTwoButtonEleven;
	JoystickButton *stickTwoButtonTwelve;
	
	JoystickButton *stickThreeTriggerButton;
	JoystickButton *stickThreeButtonTwo;
	JoystickButton *stickThreeButtonSix;
	JoystickButton *stickThreeButtonSeven;
	JoystickButton *stickThreeButtonEight;
	JoystickButton *stickThreeButtonNine;
	JoystickButton *stickThreeButtonTen;
	JoystickButton *stickThreeButtonEleven;
	
#ifdef USE_SMART_DASHBOARD
	InternalButton *autonomousButton;
#endif	
	
public:
	static OperatorInput& getInstance();

	OperatorInput();
	
	Joystick& getDriveStickOne()
	{
		return stickOne;
	}
	
	Joystick& getDriveStickTwo()
	{
		return stickTwo;
	}
	
	Joystick& getDriveStickThree()
	{
		return stickThree;
	}
};

#endif
