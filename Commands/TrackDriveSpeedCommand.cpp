// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "TrackDriveSpeedCommand.h"
TrackDriveSpeedCommand::TrackDriveSpeedCommand(float speed) : Command("TrackDriveSpeedCommand") 
{
	m_speed = speed;
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::track);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void TrackDriveSpeedCommand::Initialize() 
{
	Robot::track->TurnOffBreaks(true);
}
// Called repeatedly when this Command is scheduled to run
void TrackDriveSpeedCommand::Execute() 
{
	if(m_speed > 0)
	{
		if(TimeSinceInitialized() > 1)
		{
			Robot::track->Drive(m_speed);
		}
	}
	else
	{
		if(TimeSinceInitialized() > 1)
		{
			Robot::track->Drive(m_speed);
		}
	}
}
// Make this return true when this Command no longer needs to run execute()
bool TrackDriveSpeedCommand::IsFinished() 
{
	return false;
}
// Called once after isFinished returns true
void TrackDriveSpeedCommand::End() 
{
	Robot::track->Drive(0);
	Robot::track->TurnOffBreaks(false);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TrackDriveSpeedCommand::Interrupted() 
{
	Robot::track->Drive(0);
	Robot::track->TurnOffBreaks(false);
}
