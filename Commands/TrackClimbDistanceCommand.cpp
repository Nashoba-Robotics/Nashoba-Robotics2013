// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "TrackClimbDistanceCommand.h"
TrackClimbDistanceCommand::TrackClimbDistanceCommand(float inches)  : Command("TrackClimbDistanceCommand")
{
	m_distance = (inches);
	targetEncoderDistance = RobotMap::trackQuadratureEncoder1->GetDistance() + m_distance;
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::track);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void TrackClimbDistanceCommand::Initialize() 
{
	Robot::track->TurnOffBreaks(true);
}
// Called repeatedly when this Command is scheduled to run
void TrackClimbDistanceCommand::Execute() 
{
	if(m_distance > 0)
	{
		if(TimeSinceInitialized() > 0.5)
		{
			Robot::track->Drive(0.25);
		}
	}
	else if(m_distance < 0)
		Robot::track->Drive(-0.25);
	else
		Robot::track->Drive(0);
}
// Make this return true when this Command no longer needs to run execute()
bool TrackClimbDistanceCommand::IsFinished() 
{
	if(m_distance < 0)
	{
		return (targetEncoderDistance >= (RobotMap::trackQuadratureEncoder1->GetDistance()));
	}
	else
	{
		return (targetEncoderDistance <= (RobotMap::trackQuadratureEncoder1->GetDistance()));
	}
	
}
// Called once after isFinished returns true
void TrackClimbDistanceCommand::End() 
{
	Robot::track->Drive(0);
	Robot::track->TurnOffBreaks(false);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TrackClimbDistanceCommand::Interrupted() 
{
	Robot::track->Drive(0);
	Robot::track->TurnOffBreaks(false);
}
