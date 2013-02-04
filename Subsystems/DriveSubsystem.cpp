#include "DriveSubsystem.h"
#include "WPIlib.h"
#include "../OperatorInput.h"
#include "../Commands/JoyStickDriveCommand.h"
#include "../CommandBasedRobot.h"
#include "../HardwareSettings.h"


void DriveSubsystem::InitDefaultCommand()
{
	printf("%s entering", __FUNCTION__);
	SetDefaultCommand( new JoyStickDriveCommand() );
}


void DriveSubsystem::driveField (float x, float y, float z )
{
	float angle = gyro.GetAngle();
	myWPIdrive.MecanumDrive_Cartesian(x, y, (z/2), angle );
	
	SmartDashboard::PutNumber("Drive_X", x);
	SmartDashboard::PutNumber("Drive_Y", y);
	SmartDashboard::PutNumber("Drive_Z", z);
}


void DriveSubsystem::drive (float x, float y, float z)
{
	SmartDashboard::PutNumber("Drive_X", x);
	SmartDashboard::PutNumber("Drive_Y", y);
	SmartDashboard::PutNumber("Drive_Z", z);
	
	myWPIdrive.MecanumDrive_Cartesian(x, y, (z/2), 0);
}

void DriveSubsystem::frontLeftJaguarDrive (float speed)
{
	frontLeftJaguar.Set (speed);
}
void DriveSubsystem::frontRightJaguarDrive (float speed)
{
	frontRightJaguar.Set (speed);
}
void DriveSubsystem::backLeftJaguarDrive (float speed)
{
	backLeftJaguar.Set (speed);
}
void DriveSubsystem::backRightJaguarDrive (float speed)
{
	backRightJaguar.Set (speed);
}

void DriveSubsystem::initialize()
{
	frontLeftJaguar.ConfigNeutralMode (CANJaguar::kNeutralMode_Coast );
	frontRightJaguar.ConfigNeutralMode(CANJaguar::kNeutralMode_Coast );
	backLeftJaguar.ConfigNeutralMode  (CANJaguar::kNeutralMode_Coast );
	backRightJaguar.ConfigNeutralMode (CANJaguar::kNeutralMode_Coast );
	
	frontLeftJaguar.ConfigEncoderCodesPerRev(250);
	frontLeftJaguar.SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	
	frontRightJaguar.ConfigEncoderCodesPerRev(250);
	frontRightJaguar.SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	
	backLeftJaguar.ConfigEncoderCodesPerRev(250);
	backLeftJaguar.SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	
	backRightJaguar.ConfigEncoderCodesPerRev(250);
	backRightJaguar.SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	
	gyro.Reset();

}

void DriveSubsystem::UpdateSmartDashboard()
{
#ifdef USE_SMART_DASHBOARD
	float leftFrontEncoderPosition  = frontLeftJaguar.GetPosition();
	float leftBackEncoderPosition   = backLeftJaguar.GetPosition();
	float rightFrontEncoderPosition = frontRightJaguar.GetPosition();
	float rightBackEncoderPosition  = backRightJaguar.GetPosition();
		
	SmartDashboard::PutNumber("leftFrontEncoder", leftFrontEncoderPosition);	
	SmartDashboard::PutNumber("leftBackEncoder", leftBackEncoderPosition );	
	SmartDashboard::PutNumber("rightFrontEncoder", rightFrontEncoderPosition );	
	SmartDashboard::PutNumber("rightBackEncoder", rightBackEncoderPosition );
	SmartDashboard::PutNumber("Gyro", gyro.GetAngle() );
	
#endif
	
}

DriveSubsystem::DriveSubsystem() : Subsystem("DriveSubsystem"), 	
		frontLeftJaguar  ( FRONT_LEFT_JAGUAR_CANID  ),
		frontRightJaguar ( FRONT_RIGHT_JAGUAR_CANID ),
		backLeftJaguar   ( BACK_LEFT_JAGUAR_CANID   ),
		backRightJaguar  ( BACK_RIGHT_JAGUAR_CANID  ),
		gyro ( GYRO_PORT ),
		myWPIdrive(frontLeftJaguar,  backLeftJaguar, frontRightJaguar, backRightJaguar)

{
	myWPIdrive.SetSafetyEnabled	(false);
#define NR_CAST_CANID
#ifndef NR_CAST_CANID
	myWPIdrive.SetInvertedMotor( myWPIdrive.kFrontLeftMotor, true );
	myWPIdrive.SetInvertedMotor( myWPIdrive.kRearLeftMotor, true );
#else
	myWPIdrive.SetInvertedMotor(( RobotDrive::kFrontRightMotor ), true );
	myWPIdrive.SetInvertedMotor(( RobotDrive::kRearRightMotor ), true );
#endif
	initialize();
}


