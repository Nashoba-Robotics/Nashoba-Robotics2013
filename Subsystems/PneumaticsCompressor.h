// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef PNEUMATICS_COMPRESSOR_H
#define PNEUMATICS_COMPRESSOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class PneumaticsCompressor: public Subsystem {
private:
	bool automatic;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DigitalInput* pressureSensor;
	Relay* compressor;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DigitalInput* digitalInput1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	PneumaticsCompressor();
	void InitDefaultCommand();
	void toggleAutomatic();
	bool getAutomatic();
	void setCompressor(bool value);
	bool pressureIsFull();
};
#endif
