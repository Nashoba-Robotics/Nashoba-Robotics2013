// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/ShooterIdleCommand.h"
Shooter::Shooter() : Subsystem("Shooter") 
{
	m_speed = 0;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	cANJaguar1 = RobotMap::shooterCANJaguar1;
	loaderSolenoid = RobotMap::shooterLoaderSolenoid;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Shooter::InitDefaultCommand() 
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new ShooterIdleCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Shooter::LoaderDeploy()
{
	loaderSolenoid->Set(DoubleSolenoid::kForward);
}
void Shooter::LoaderUndeploy()
{
	loaderSolenoid->Set(DoubleSolenoid::kReverse);
}
float Shooter::getSpeed()
{
	return m_speed;
}
void Shooter::setSpeed(float speed)
{
	m_speed = speed;
	cANJaguar1->Set(m_speed);
}
void Shooter::maintainSpeed()
{
	cANJaguar1->Set(m_speed);
}
