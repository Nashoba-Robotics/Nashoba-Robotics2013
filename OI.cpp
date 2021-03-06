
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
#include "Commands/ArticulatingDeployCommand.h"
#include "Commands/ArticulatingExtendCommand.h"
#include "Commands/ArticulatingIdleCommand.h"
#include "Commands/ArticulatingUndeployCommand.h"
#include "Commands/ArticulatingunextendCommand.h"
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
#include "Commands/FixedDeployCommand.h"
#include "Commands/FixedIdleCommand.h"
#include "Commands/FixedundeployCommand.h"
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
OI::OI(): pad(1), xPad(2)
{	
	SmartDashboard::PutNumber("Track Drive Speed", 0);
	
	lStickButtonX = new JoystickButton(&xPad, XPad::kLeftStickButton);
	lStickButtonX->WhenPressed(new TippingDeployCommand());
	
	rStickButtonX = new JoystickButton(&xPad, XPad::kRightStickButton);
	rStickButtonX->WhenPressed(new TippingUndeployCommand());
	
	xButtonX = new JoystickButton(&xPad, XPad::kXButton);
	xButtonX->WhenPressed(new ShooterLoadCommand());
	
	bButtonX = new JoystickButton(&xPad, XPad::kBButton);
	bButtonX->WhenPressed(new ShooterStopCommand());
	
	rBumperButtonX = new JoystickButton(&xPad, XPad::kRightBumperButton);
	rBumperButtonX->WhenPressed(new TrackDriveSpeedCommand(0.3));
	
	lBumperButtonX = new JoystickButton(&xPad, XPad::kLeftBumperButton);
	lBumperButtonX->WhenPressed(new TrackDriveSpeedCommand(-0.6));
	
	startButtonX = new JoystickButton(&xPad, XPad::kStartButton);
	startButtonX->WhenPressed(new CompressorStartCommand());
	
	backButtonX = new JoystickButton(&xPad, XPad::kBackButton);
	backButtonX->WhenPressed(new CompressorAutomaticToggleCommand());
	
	yButtonX = new JoystickButton(&xPad, XPad::kYButton);
	yButtonX->WhenPressed(new TrackIdleCommand());
	
	aButtonX = new JoystickButton(&xPad, XPad::kAButton);
	aButtonX->WhenPressed(new ShooterRunCommand());
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Articulating Idle Command", new ArticulatingIdleCommand());
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
	SmartDashboard::PutData("Shoot Four Times Command", new ShootFourTimesCommand());
	SmartDashboard::PutData("Compressor Automatic Toggle Command", new CompressorAutomaticToggleCommand());
	SmartDashboard::PutData("Track Deploy Brake Command", new TrackDeployBrakeCommand());
	SmartDashboard::PutData("Track Undeploy Brake Command", new TrackUndeployBrakeCommand());
	SmartDashboard::PutData("Shooter Run Command", new ShooterRunCommand());
	SmartDashboard::PutData("Articulating Extend Command", new ArticulatingExtendCommand());
	SmartDashboard::PutData("Articulating unextend Command", new ArticulatingunextendCommand());
	SmartDashboard::PutData("Cancel All Command", new CancelAllCommand());
	SmartDashboard::PutData("FixedDeployCommand", new FixedDeployCommand());
	SmartDashboard::PutData("FixedundeployCommand", new FixedundeployCommand());
	SmartDashboard::PutData("FixedIdleCommand", new FixedIdleCommand());
	SmartDashboard::PutData("ArticulatingDeployCommand", new ArticulatingDeployCommand());
	SmartDashboard::PutData("ArticulatingUndeployCommand", new ArticulatingUndeployCommand());
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
	SmartDashboard::PutNumber("SD Times Per Second", 5);
	SmartDashboard::PutNumber("Shooter Jag Speed", 0);
	SmartDashboard::PutNumber("TRACK DOWN SPEED", 0);
}
bool OI::getPadButton(int type)
{
	return pad.GetRawButton(type);
}
float OI::getPadRawAxis(int axis)
{
	return pad.GetRawAxis(axis);
}
float OI::getXPadRawAxis(int axis)
{
	return xPad.GetRawAxis(axis);
}
bool OI::getXPadButton(int button)
{
	return xPad.GetRawButton(button);
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
