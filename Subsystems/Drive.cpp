// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Drive.h"
#include "../RobotMap.h"
#include "../Commands/DriveBrakeCommand.h"
#include "../Commands/DriveDriveCommand.h"
Drive::Drive() : Subsystem("Drive") 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	cANJaguar1 = RobotMap::driveCANJaguar1;
	cANJaguar2 = RobotMap::driveCANJaguar2;
	cANJaguar3 = RobotMap::driveCANJaguar3;
	cANJaguar4 = RobotMap::driveCANJaguar4;
	robotDrive41 = RobotMap::driveRobotDrive41;
	gyro1 = RobotMap::driveGyro1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Drive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DriveDriveCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
float Drive::getGyroAngle()
{
	return gyro1->GetAngle();
}
void Drive::driveMecanum(float x, float y, float z)
{
	robotDrive41->MecanumDrive_Cartesian(x, y, z, 0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
