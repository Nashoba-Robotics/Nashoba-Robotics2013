#ifndef CLIMB_TRACK__COMMAND_H
#define CLIMB_TRACK_COMMAND_H

#include "../CommandBase.h"


class ClimbTrackCommand : public CommandBase 
{
	CANJaguar climbjag1;
	CANJaguar climbjag2;

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
