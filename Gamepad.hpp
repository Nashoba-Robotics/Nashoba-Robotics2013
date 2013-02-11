/*
 * @file Gamepad.hpp
 * 
 * @brief A wrapper class for the Logitech F310 game controller
 */

#ifndef GAMEPAD_HPP
#define GAMEPAD_HPP

#include "Joystick.h"

class Gamepad : public Joystick
{
public:

	// Enums for the axes, sticks, and buttons
	typedef enum
	{
		kLeftStick,
		kRightStick,
	} StickType;

	typedef enum
	{
		kLeftXAxis = 1,
		kLeftYAxis,
		kRightXAxis,
		kRightYAxis,
		kDPadXAxis,
		kDPadYAxis
	} AxisType;

	typedef enum
	{
		kXButton = 1,
		kAButton,
		kBButton,
		kYButton,
		kLeftBumper,
		kRightBumper,
		kLeftTrigger,
		kRightTrigger,
		kBackButton,
		kStartButton,
		kLeftStickButton,
		kRightStickButton,
	} ButtonType;

	Gamepad(UINT32 port) : Joystick(port) {}
	virtual ~Gamepad() {};

private:

	/* Button definitions (Not Nessesary?)
	static const UINT32 kLeftXAxisNum = 1;
	static const UINT32 kLeftYAxisNum = 2;
	static const UINT32 kRightXAxisNum = 3;
	static const UINT32 kRightYAxisNum = 4;
	static const UINT32 kDPadXAxisNum = 5;
	static const UINT32 kDPadYAxisNum = 6;

	static const UINT32 kXButtonNum = 1;
	static const UINT32 kAButtonNum = 2;
	static const UINT32 kBButtonNum = 3;
	static const UINT32 kYButtonNum = 4;
	static const UINT32 kLeftBumperNum = 5;
	static const UINT32 kRightBumperNum = 6;
	static const UINT32 kLeftTriggerNum = 7;
	static const UINT32 kRightTriggerNum = 8;
	static const UINT32 kBackButtonNum = 9;
	static const UINT32 kStartButtonNum = 10;
	static const UINT32 kLeftStickButtonNum = 11;
	static const UINT32 kRightStickButtonNum = 12;*/
};

#endif
