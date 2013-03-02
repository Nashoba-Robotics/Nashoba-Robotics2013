
// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"

// Can I just say that this is ridiculous?
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CancelAllCommand.h"
#include "Commands/CheckAllSensorsCommand.h"
#include "Commands/CompressorAutomaticToggleCommand.h"
#include "Commands/CompressorIdleCommand.h"
#include "Commands/CompressorStartCommand.h"
#include "Commands/CompressorStopCommand.h"
#include "Commands/DriveBrakeCommand.h"
#include "Commands/DriveDirectionCommand.h"
#include "Commands/DriveDriveCommand.h"
#include "Commands/DriveRotateCommand.h"
#include "Commands/ShootFourTimesCommand.h"
#include "Commands/ShooterIdleCommand.h"
#include "Commands/ShooterLoadCommand.h"
#include "Commands/ShooterRunCommand.h"
#include "Commands/ShooterStopCommand.h"
#include "Commands/TippingDeployCommand.h"
#include "Commands/TippingIdleCommand.h"
#include "Commands/TippingUndeployCommand.h"
#include "Commands/TrackDeployBrakeCommand.h"
#include "Commands/TrackDriveDownUntilForceCommand.h"
#include "Commands/TrackDriveSpeedCommand.h"
#include "Commands/TrackIdleCommand.h"
#include "Commands/TrackUndeployBrakeCommand.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/ShooterRunCommand.h"
OI::OI(): pad(1),  stickOne(2)
{
	/*
	 * X Button-      Track Idle Command
	 * B Button-      Compressor Stop Command
	 * Y Button-      Articulated Deploy
	 * A Button-      Articulated Undeploy
	 * 
	 * R Bumper-      Track Drive Speed (0.25)
	 * L Bumper-      Track Drive Speed (-0.25)
	 * R Triger-      Fixed Deploy
	 * L Triger-      Fixed Undeploy
	 * 
	 * Back Button-   Compressor Automatic Toggle
	 * Start Button-  Compressor Start
	 * 
	 * Right Stick-   Climb up 5 inches
	 * Left Stick-    Clibm down 5 inches
	 */
	
	lStickButton = new JoystickButton(&pad, Gamepad::kLeftStickButton);
	
	rStickButton = new JoystickButton(&pad, Gamepad::kRightStickButton);
	
	xButton = new JoystickButton(&pad, Gamepad::kXButton);
	xButton->WhenPressed(new TrackIdleCommand());
	
	bButton = new JoystickButton(&pad, Gamepad::kBButton);
	bButton->WhenPressed(new CompressorStopCommand());
	
	rtButton = new JoystickButton(&pad, Gamepad::kRightTrigger);
	//rtButton->WhenPressed(new ShooterRunCommand());
	
	rBumperButton = new JoystickButton(&pad, Gamepad::kRightBumper);
	rBumperButton->WhenPressed(new TrackDriveSpeedCommand(0.3));
	
	lBumperButton = new JoystickButton(&pad, Gamepad::kLeftBumper);
	lBumperButton->WhenPressed(new TrackDriveSpeedCommand(-0.3));
	
	lTriggerButton = new JoystickButton(&pad, Gamepad::kLeftTrigger);
	
	rTriggerButton = new JoystickButton(&pad, Gamepad::kRightTrigger);
	
	startButton = new JoystickButton(&pad, Gamepad::kStartButton);
	startButton->WhenPressed(new CompressorStartCommand());
	
	backButton = new JoystickButton(&pad, Gamepad::kBackButton);
	backButton->WhenPressed(new CompressorAutomaticToggleCommand());
	
	yButton = new JoystickButton(&pad, Gamepad::kYButton);
	
	aButton = new JoystickButton(&pad, Gamepad::kAButton);
	
	stickOneTriggerButton = new JoystickButton( &stickOne, 1 );
	stickOneButtonTwo = new JoystickButton( &stickOne, 2 );
	stickOneButtonThree = new JoystickButton( &stickOne, 3 );
	stickOneButtonFour = new JoystickButton( &stickOne, 4 );
	stickOneButtonFive = new JoystickButton( &stickOne, 5 );
	stickOneButtonSix = new JoystickButton( &stickOne, 6 );
	stickOneButtonSeven = new JoystickButton( &stickOne, 7 );
	stickOneButtonEight = new JoystickButton( &stickOne, 8 );
	stickOneButtonNine = new JoystickButton( &stickOne, 9 );
	stickOneButtonTen = new JoystickButton( &stickOne, 10 );
	stickOneButtonEleven = new JoystickButton( &stickOne, 11 );
	stickOneButtonTwelve = new JoystickButton( &stickOne, 12 );
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("Drive Drive Command", new DriveDriveCommand());
	SmartDashboard::PutData("Drive Brake Command", new DriveBrakeCommand());
	SmartDashboard::PutData("Shooter Idle Command", new ShooterIdleCommand());
	SmartDashboard::PutData("Shooter Load Command", new ShooterLoadCommand());
	SmartDashboard::PutData("Shooter Stop Command", new ShooterStopCommand());
	SmartDashboard::PutData("Track Idle Command", new TrackIdleCommand());
	SmartDashboard::PutData("Track Drive Down Until Force Command", new TrackDriveDownUntilForceCommand());
	SmartDashboard::PutData("Compressor Start Command", new CompressorStartCommand());
	SmartDashboard::PutData("Compressor Stop Command", new CompressorStopCommand());
	SmartDashboard::PutData("Tipping Deploy Command", new TippingDeployCommand());
	SmartDashboard::PutData("Tipping Undeploy Command", new TippingUndeployCommand());
	SmartDashboard::PutData("Tipping Idle Command", new TippingIdleCommand());
	SmartDashboard::PutData("Cancel All Command", new CancelAllCommand());
	SmartDashboard::PutData("Shoot Four Times Command", new ShootFourTimesCommand());
	SmartDashboard::PutData("Compressor Automatic Toggle Command", new CompressorAutomaticToggleCommand());
	SmartDashboard::PutData("Track Deploy Brake Command", new TrackDeployBrakeCommand());
	SmartDashboard::PutData("Track Undeploy Brake Command", new TrackUndeployBrakeCommand());
	SmartDashboard::PutData("Shooter Run Command", new ShooterRunCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutData("Tipping Idle Command", new TippingIdleCommand());
	
	
	SmartDashboard::PutData("Tipping Deploy Command", new TippingDeployCommand());
	SmartDashboard::PutData("Tipping Undeploy Command", new TippingUndeployCommand());
	SmartDashboard::PutData("Shooter Load Command", new ShooterLoadCommand());
	SmartDashboard::PutData("Shooter Stop Command", new ShooterStopCommand());
	SmartDashboard::PutData("Track Drive Down Until Force Command", new TrackDriveDownUntilForceCommand());
	
	SmartDashboard::PutData("Tipping Deploy Command", new TippingDeployCommand());
	SmartDashboard::PutData("Tipping Undeploy Command", new TippingUndeployCommand());
	SmartDashboard::PutData("Shoot Four Times Command", new ShootFourTimesCommand());
	SmartDashboard::PutData("Shooter Load Command", new ShooterLoadCommand());
	SmartDashboard::PutData("Shooter Run Command", new ShooterRunCommand());
	
	SmartDashboard::PutBoolean("Compressor Automatic", false);
	SmartDashboard::PutNumber("SD Times Per Second", 10);
	SmartDashboard::PutNumber("Shooter Jag Speed", 0);
	SmartDashboard::PutNumber("TRACK DOWN SPEED", 0);
}
bool OI::GetPadButton(int type)
{
	return pad.GetRawButton(type);
}
float OI::getPadRawAxis(int axis)
{
	return pad.GetRawAxis(axis);
}
float OI::getBigStickX()
{
	return stickOne.GetX();
}
float OI::getBigStickY()
{
	return stickOne.GetY();
}
float OI::getBigStickZ()
{
	return stickOne.GetZ();
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
