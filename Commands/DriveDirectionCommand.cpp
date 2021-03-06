// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveDirectionCommand.h"
DriveDirectionCommand::DriveDirectionCommand(float x, float y, float time): Command("DriveDirectionCommand")
{
	m_x = x;
	m_y = y;
	m_time = time;
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drive);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void DriveDirectionCommand::Initialize() 
{
	
}
// Called repeatedly when this Command is scheduled to run
void DriveDirectionCommand::Execute() 
{
	Robot::drive->driveMecanum(m_x, m_y, 0);
}
// Make this return true when this Command no longer needs to run execute()
bool DriveDirectionCommand::IsFinished() 
{
	return (TimeSinceInitialized() >= m_time);
}
// Called once after isFinished returns true
void DriveDirectionCommand::End() 
{
	Robot::drive->driveMecanum(0,0,0);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveDirectionCommand::Interrupted() 
{
	Robot::drive->driveMecanum(0,0,0);
}
