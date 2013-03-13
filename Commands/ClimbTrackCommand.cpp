#ifndef CLIMB_TRACK_COMMAND_H

#include "ClimbTrackCommand.h"
#include "../Subsystems/Drive.h"

ClimbTrackCommand::ClimbTrackCommand() : Command("ClimbTrackCommand")
{
	Requires(Robot::drive);
}


void ClimbTrackCommand::Initialize() 
{
	
}

// Called repeatedly when this Command is scheduled to run
void ClimbTrackCommand::Execute() 
{}

// Make this return true when this Command no longer needs to run execute()
bool ClimbTrackCommand::IsFinished() 
{
return true;
}

// Called once after isFinished returns true
void ClimbTrackCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbTrackCommand::Interrupted() 
{

}

#endif
