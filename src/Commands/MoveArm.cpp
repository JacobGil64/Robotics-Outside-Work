/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "MoveArm.h"
#include "../Robot.h"
#include "../OI.h"

MoveArm::MoveArm() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::armP);
}

// Called just before this Command runs the first time
void MoveArm::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveArm::Execute() {
	Robot::armP->armMotor(Robot::m_oi->getArmStick()->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool MoveArm::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveArm::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveArm::Interrupted() {

}
