#include "JoyStickDriveCommand.h"
#include "../OperatorInput.h"
#include "../Subsystems/DriveSubsystem.h"


JoyStickDriveCommand::JoyStickDriveCommand() : CommandBase("JoyStickDriveCommand")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	
	Requires(drivesubsystem);
}

// Called just before this Command runs the first time
void JoyStickDriveCommand::Initialize() 
{
	printf ("DriveForwardAutoCommand Initialized \n");
}

#define X_THRESHOLD (0.1)
#define Y_THRESHOLD (0.1)
#define Z_THRESHOLD (0.1)

// Called repeatedly when this Command is scheduled to run
void JoyStickDriveCommand::Execute() 
{
	Joystick& driveStick = OperatorInput::getInstance().getDriveStickOne();
	Joystick& fieldStick = OperatorInput::getInstance().getDriveStickTwo();
	
	float driveX = driveStick.GetX();
	float driveY = driveStick.GetY();
	float driveZ = driveStick.GetZ();
	
	float fieldX = fieldStick.GetX();
	float fieldY = fieldStick.GetY();
	float fieldZ = 0; // fieldStick.GetZ();
	
	SmartDashboard::PutNumber("RoboCentric Drive X", driveX);	
	SmartDashboard::PutNumber("RoboCentric Drive Y", driveY);	
	SmartDashboard::PutNumber("RoboCentric Drive Z", driveZ);	

	SmartDashboard::PutNumber("FieldCentric Drive X", fieldX);	
	SmartDashboard::PutNumber("FieldCentric Drive Y", fieldY);	
	SmartDashboard::PutNumber("FieldCentric Drive Z", fieldZ);	
	
	// Default Command that will drive the robot with Mecanum Cartesian Drive
	if (   ( SNAP_TO_VALUE( 0, X_THRESHOLD, driveX)  != 0 )
		|| ( SNAP_TO_VALUE( 0, Y_THRESHOLD, driveY)  != 0 )
		|| ( SNAP_TO_VALUE( 0, Z_THRESHOLD, driveZ)  != 0 )  )
	{
	drivesubsystem->drive (
					SNAP_TO_VALUE( 0, X_THRESHOLD, driveX ), 
					SNAP_TO_VALUE( 0, Y_THRESHOLD, driveY ),
					SNAP_TO_VALUE( 0, Z_THRESHOLD, driveZ )
						   );
	}
	else 
	{
	drivesubsystem->driveField (
					SNAP_TO_VALUE( 0, X_THRESHOLD, fieldX ),
					SNAP_TO_VALUE( 0, Y_THRESHOLD, fieldY ),
					SNAP_TO_VALUE( 0, Z_THRESHOLD, fieldZ )
							);
	}
	
}

// Make this return true when this Command no longer needs to run execute()
bool JoyStickDriveCommand::IsFinished() 
{
	return false;
}

// Called once after isFinished returns true
void JoyStickDriveCommand::End() 
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void JoyStickDriveCommand::Interrupted() 
{
	printf("JoyStickDriveCommand has been Interrupted");
}
