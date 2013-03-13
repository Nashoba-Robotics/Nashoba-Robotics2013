#define CLIMB_TRACK_COMMAND_H

#ifndef CLIMB_TRACK__COMMAND_H
#define CLIMB_TRACK_COMMAND_H

#include "Commands/Subsystem.h"
#include "../Robot.h"


class ClimbTrackCommand : public Command
{
public:
	
	ClimbTrackCommand();

	void 
	ClimbUp();
	
	void 
	ClimbDown();
	
	void
	StopClimb();

	virtual void 
	Initialize();
	
	virtual void 
	Execute();
	
	virtual bool 
	IsFinished();
	
	virtual void
	End();
	
	virtual void 
	Interrupted();
};

#endif
