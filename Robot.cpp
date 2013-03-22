// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Robot.h"
#define INCLUDE_ALL_SMARTDASHBOARD_INFO2
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
Drive* Robot::drive = 0;
Shooter* Robot::shooter = 0;
Track* Robot::track = 0;
Tipping* Robot::tipping = 0;
PneumaticsCompressor* Robot::pneumaticsCompressor = 0;
ArticulatingArm* Robot::articulatingArm = 0;
OI* Robot::oi = 0;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	drive = new Drive();
	shooter = new Shooter();
	track = new Track();
	tipping = new Tipping();
	pneumaticsCompressor = new PneumaticsCompressor();
	articulatingArm = new ArticulatingArm();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi = new OI();
	lw = LiveWindow::GetInstance();
	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand = new AutonomousCommand();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	SmartDashboard::PutData(drive);
  }
	
void Robot::AutonomousInit() 
{
	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}
	
void Robot::AutonomousPeriodic() 
{
	
	//Robot::drive->driveMecanum(0,0,0);
	
	Scheduler::GetInstance()->Run();
}
	
void Robot::TeleopInit() 
{
	dashboardCounter = 0;
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// this line or comment it out.

	if (autonomousCommand != NULL)
		autonomousCommand->Cancel();
	
///	fieldTimerCheckCommand->Start();
}
//Runs 50 times a second
void Robot::TeleopPeriodic() 
{
	
	dashboardCounter++;
	/*
	double currentTime = Timer::GetFPGATimestamp();
	SmartDashboard::PutNumber("Delta Periodic Invocation", currentTime - lastExecuteTime);
	
	lastExecuteTime = currentTime;
	
	currentTime = Timer::GetFPGATimestamp();
	SmartDashboard::PutNumber("Scheduler Run duration", currentTime - lastExecuteTime);
	lastExecuteTime = currentTime;*/
	
	//Shooter Wheel
	SmartDashboard::PutNumber("Shooter Jag Speed", RobotMap::shooterCANJaguar1->GetSpeed());
	SmartDashboard::PutNumber("Shooter Speed", Robot::shooter->getActualSpeed());
	
	int timesPerSecond = (int)SmartDashboard::GetNumber("SD Times Per Second");
	if(timesPerSecond < 0)
	{
		timesPerSecond = 1;
	}
	int updateRate = (int)((50/timesPerSecond) + 0.5);
	if((dashboardCounter % updateRate) == 0)
	{
		SmartDashboard::PutNumber("Track Quad Encoder Ticks", RobotMap::trackQuadratureEncoder1->Get());
		SmartDashboard::PutNumber("Track Quad Encoder Distance Inches", RobotMap::trackQuadratureEncoder1->GetDistance());
		//High Pressure Limit Sensor
		SmartDashboard::PutBoolean("Pressure Limit Sensor", RobotMap::pneumaticsCompressorDigitalInput1->Get());
		//Articulating Arm Slide Petentiometer
		
		SmartDashboard::PutNumber("Gyro Sensor", Robot::drive->getGyroAngle());
		SmartDashboard::PutNumber("Track Analog Force 1", RobotMap::trackAnalogForce1->GetVoltage());
		SmartDashboard::PutNumber("Track Analog Force 2", RobotMap::trackAnalogForce2->GetVoltage());
		
		
		//Subsystems
		SmartDashboard::PutData(Robot::drive);
		SmartDashboard::PutData(Robot::track);
		SmartDashboard::PutData(Robot::shooter);
		SmartDashboard::PutData(Robot::tipping);
		SmartDashboard::PutData(Robot::articulatingArm);
		SmartDashboard::PutData(Robot::pneumaticsCompressor);
	}
		Scheduler::GetInstance()->Run();
	
}
void Robot::TestPeriodic() 
{
//	lw->Run();
}
START_ROBOT_CLASS(Robot);
