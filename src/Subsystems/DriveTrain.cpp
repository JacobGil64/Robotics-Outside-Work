/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Subsystems/DriveTrain.h>
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem"), leftTalonSRX(new TalonSRX(2)), rightTalonSRX(new TalonSRX(3))
{
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new TankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::tankDrive(double leftPower, double rightPower)
{
	leftTalonSRX->Set(ControlMode::PercentOutput, -leftPower);
	rightTalonSRX->Set(ControlMode::PercentOutput, rightPower);
}
