#ifndef CAMERA_ROTATE_TO_POLE_COMMAND_H
#define CAMERA_ROTATE_TO_POLE_COMMAND_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class CameraRotateToPoleCommand : public PIDCommand
{
private:
	Timer timer;
	int targetcount;
	double gyroOffset;

public:
	void DisplayInLiveWindow();
	CameraRotateToPoleCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
	virtual NetworkTable* GetTable();
	inline double ReturnPIDInput();
	
	void UsePIDOutput(double output);
	
//	static DriveSubsystem *drivesubsystem;
};
#endif
