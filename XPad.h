/**
 * A Wrapper class for the Xbox 360 Wired Controller
 */

#ifndef XPAD_H
#define XPAD_H

#include "Joystick.h"

class XPad : public Joystick
{
public:
	XPad(UINT32 port) : Joystick(port){}
	//virtual ~XPad() {};
	enum
	{
		kLeftXAxis = 1,
		kLeftYAxis, //Inverted
		kTriggerAxis, //Left negative, right posotive
		kRightXAxis,
		kRightYAxis, //Inverted
		kDPadXAxis,
		kDPadYAxis //<-Doesnt seem to work?
	};
	
	enum
	{
		kAButton = 1,
		kBButton,
		kXButton,
		kYButton,
		kLeftBumperButton,
		kRightBumperButton,
		kBackButton,
		kStartButton,
		kLeftStickButton,
		kRightStickButton
	};
};
#endif
