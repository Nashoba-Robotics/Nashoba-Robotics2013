// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ArticulatingArm.h"
#include "../Robotmap.h"
#include "../Commands/ArticulatedIdleCommand.h"
ArticulatingArm::ArticulatingArm() : Subsystem("ArticulatingArm") 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	cANJaguar1 = RobotMap::articulatingArmCANJaguar1;
	deployLimit = RobotMap::articulatingArmDeployLimit;
	undeployLimit = RobotMap::articulatingArmUndeployLimit;
	doubleSolenoid1 = RobotMap::articulatingArmDoubleSolenoid1;
	slidePetentiometer = RobotMap::articulatingArmSlidePetentiometer;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
}
    
void ArticulatingArm::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new ArticulatedIdleCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void ArticulatingArm::setArm(bool value)
{
	if(!value)
	{
		doubleSolenoid1->Set(DoubleSolenoid::kForward);
	}
	else
	{
		doubleSolenoid1->Set(DoubleSolenoid::kReverse);
	}
	//doubleSolenoid1->Set((value)?DoubleSolenoid::kForward:DoubleSolenoid::kReverse);
}
bool ArticulatingArm::getUndeployLimit()
{
	return !undeployLimit->Get();
}
bool ArticulatingArm::getDeployedLimit()
{
	return !deployLimit->Get();
}
void ArticulatingArm::setExtendingMotor(float speed)
{
	cANJaguar1->Set(-speed);
}
bool ArticulatingArm::getArmExtended()
{
	return (slidePetentiometer->GetVoltage() >= 3.19 );
}
bool ArticulatingArm::getArmUnextended()
{
	return (slidePetentiometer->GetVoltage() <= 0.83);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
