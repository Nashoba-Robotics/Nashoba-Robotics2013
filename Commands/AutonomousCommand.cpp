#include "AutonomousCommand.h"

AutonomousCommand::AutonomousCommand() : CommandGroup("AutonomousCommand")
{	
	/*
	AddSequential( new DriveDurationCommand(3.5, 0.5, 0) );
	AddSequential( new DriveDurationCommand(2, 0, 0.5) );
	
	AddParallel( new ShooterTakeShotCommand() );
 	AddParallel( new DriveDurationCommand(1, 0.5, 0.5) );
	
	AddSequential( new WaitCommand (2.75) );
	AddSequential( new ShooterTakeShotCommand() );
	AddSequential( new WaitCommand (1.7) );
	AddSequential( new ShooterTakeShotCommand() );
	*/
}
