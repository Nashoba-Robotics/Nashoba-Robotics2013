// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "PneumaticsCompressor.h"
#include "../RobotMap.h"
#include "../Commands/CompressorIdleCommand.h"
PneumaticsCompressor::PneumaticsCompressor() : Subsystem("PneumaticsCompressor") 
{
	automatic = false;
	
	pressureSensor = RobotMap::pneumaticsCompressorDigitalInput1;
	compressor = RobotMap::compressorRelay;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	digitalInput1 = RobotMap::pneumaticsCompressorDigitalInput1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void PneumaticsCompressor::InitDefaultCommand() 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new CompressorIdleCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void PneumaticsCompressor::toggleAutomatic()
{
	automatic = !automatic;
}
bool PneumaticsCompressor::getAutomatic()
{
	return automatic;
}
void PneumaticsCompressor::setCompressor(bool value)
{
	if(value)
	{
		compressor->Set(Relay::kOn);
	}
	else
	{
		compressor->Set(Relay::kOff);
	}
}
bool PneumaticsCompressor::pressureIsFull()
{
	return pressureSensor->Get();
}
