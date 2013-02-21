#include "CameraRotateToTargetCommand.h"

#include <math.h>
//#include "WPILib.h"
#include <Timer.h>

#define MAX_SPEED 1

class PIDCoef
{
public:
	PIDCoef( double p, double i, double d, double f) : m_p( p ), m_i( i ), m_d( d ), m_f(f)
	{ }

	void SetPID( double p, double i, double d , double f)
	{
		m_p = p;
		m_i = i;
		m_d = d;
		m_f = f;
	}
	void SetP( double p )
	{ m_p = p; }

	void SetI( double i )
	{ m_i = i; }

	void SetD( double d )
	{ m_d = d; }

	double GetP( void )
	{ return m_p; }
	
	double GetI( void )
	{ return m_i; }
	
	double GetD( void )
	{ return m_d; }
	
	double GetF(void)
	{ return m_f; }

private:
	double m_p, m_i, m_d, m_f;
};

PIDCoef pidcoefs( .6, .05, 0.0, .1 );
extern "C" void CameraSetPID( char* p, char* i, char* d,  char* f )
{ pidcoefs.SetPID( atof(p), atof(i), atof(d), atof(f) ); }

//DriveSubsystem* CameraRotateToTargetCommand::drivesubsystem = NULL;

CameraRotateToTargetCommand::CameraRotateToTargetCommand() : PIDCommand("CameraRotateToTargetCommand", pidcoefs.GetP(), pidcoefs.GetI(), pidcoefs.GetD(), pidcoefs.GetF() ) // 0.06, 4.0)
{
	Requires(Robot::drive);
	LiveWindow::GetInstance()->AddActuator( "CameraRotate", "CameraRotateToTargetCommand", GetPIDController() );
	SmartDashboard::PutString("Camera", __FUNCTION__);
//	SmartDashboard::PutData("PID_Controller", GetPIDController() );
}

void CameraRotateToTargetCommand::DisplayInLiveWindow()
{
//	LiveWindow::GetInstance()->AddActuator( "CameraRotateToTargetCommand", "CameraRotateToTargetCommand", GetPIDController() );
}

inline double CameraRotateToTargetCommand::ReturnPIDInput()
{
	double angle = Robot::drive->getGyroAngle() + gyroOffset;
//	if (fabs(angle) >5) GetPIDController()->Reset();
	if( angle >= 16.0 ) return MAX_SPEED;
	else if( angle <= -16.0 ) return -MAX_SPEED;
	else return angle / 16.0 * MAX_SPEED ;
}

NetworkTable* CameraRotateToTargetCommand::GetTable()
{
	return GetTable();
};
void CameraRotateToTargetCommand::UsePIDOutput(double output)
{
	/*
	SmartDashboard::PutNumber("P", GetPIDController()->GetP());
	SmartDashboard::PutNumber("I", GetPIDController()->GetI());
	SmartDashboard::PutNumber("D", GetPIDController()->GetD());
	*/
//	if( IsRunning() )
//	{
	double cameraAngle = Robot::drive->getGyroAngle() + gyroOffset;
	SmartDashboard::PutNumber("CombinedAngle", cameraAngle);
	double tolerance = 0.3;//Preferences::GetInstance()->GetDouble("Tolerance", .3);
	if((cameraAngle < tolerance) && (cameraAngle > -tolerance)) {
		Robot::drive->driveMecanum(0, 0, 0);
	} else {
		Robot::drive->driveMecanum(0, 0, output);
	}
		SmartDashboard::PutNumber("PidDrive", output);
//	}
}

void CameraRotateToTargetCommand::Initialize()
{
	static int count = 0;
	//SmartDashboard::PutData("PID_Control", this->GetPIDController() );
	//SetTimeout(10);
	GetPIDController()->Reset();
	//GetPIDController()->SetPID( pidcoefs.GetP(), pidcoefs.GetI(), pidcoefs.GetD(), pidcoefs.GetF());
	SmartDashboard::PutNumber("P", GetPIDController()->GetP());
	SmartDashboard::PutNumber("I", GetPIDController()->GetI());
	SmartDashboard::PutNumber("D", GetPIDController()->GetD());
	GetPIDController()->SetOutputRange(-0.6,0.6);
	GetPIDController()->Enable();
	
	//GetPIDController()->SetPID(Pref_p, Pref_i, Pref_d);
	
	SmartDashboard::PutString("Camera", __FUNCTION__);
	SmartDashboard::PutNumber("Camera Init Count", ++count );
	targetcount = 0;
	gyroOffset = SmartDashboard::GetNumber("Angle") - SmartDashboard::GetNumber("GyroAngle");
	
	//ResetPrintCounter();
	timer.Reset();
	timer.Start();
}

void CameraRotateToTargetCommand::Execute()
{	
	SmartDashboard::PutString("Camera", __FUNCTION__);
}

bool CameraRotateToTargetCommand::IsFinished()
{
	double cameraAngle = SmartDashboard::GetNumber("Angle");
	double tolerance = 0.3;//Preferences::GetInstance()->GetDouble("Tolerance", .3);
	if((cameraAngle < tolerance) && (cameraAngle > -tolerance)) {
		SmartDashboard::PutNumber( "Timer", timer.Get());
		SmartDashboard::PutString("Camera", __FUNCTION__);
		targetcount++;
		SmartDashboard::PutNumber( "TargetCount", targetcount);
		return (targetcount > 2);
	}
	targetcount = 0;
	SmartDashboard::PutNumber( "TargetCount", targetcount);

	return false;
}

void CameraRotateToTargetCommand::End()
{
	Robot::drive->driveMecanum(0,0,0);
	SmartDashboard::PutString("Camera", __FUNCTION__);

}

void CameraRotateToTargetCommand::Interrupted()
{
	End();
	SmartDashboard::PutString("Camera", __FUNCTION__);
}
