#include "CancelAllCommand.h"
#include "../Subsystems/DriveSubsystem.h"

CancelAllCommand::CancelAllCommand() : CommandBase("CancelAllCommand")
{
	Requires(drivesubsystem);
}


void CancelAllCommand::Initialize() 
{
	
}

// Called repeatedly when this Command is scheduled to run
void CancelAllCommand::Execute() 
{}

// Make this return true when this Command no longer needs to run execute()
bool CancelAllCommand::IsFinished() 
{
return true;
}

// Called once after isFinished returns true
void CancelAllCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CancelAllCommand::Interrupted() 
{

}
