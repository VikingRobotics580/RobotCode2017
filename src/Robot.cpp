/*
 * Robot.h
 *
 * Created 11 Jan 2017
 *
 * Main Robot file
 *
 */

#include "WPILib.h"
#include "CANTalon.h"
#include "Robot.h"
#include "JoystickControl.h"

Robot::Robot():IterativeRobot() {
	this->m_joysticks = new JoystickControl();
	this->m_motors = new MotorControl();
}

Robot::~Robot() {
	this->m_joysticks->~JoystickControl();
	delete m_joysticks;
	this->m_motors->~MotorControl();
	delete m_motors;
}

void Robot::RobotInit() {
	this->m_joysticks->init();
	this->m_motors->init();
}

void Robot::AutonomousInit() {

}

void Robot::TeleopInit() {

}

void Robot::TestInit() {

}

void Robot::DisabledInit(){

}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopPeriodic(){
	//Move the robot, assuming Joysticks 0 and 1 as left and right.
	m_motors->move((float) m_joysticks->joyStateY(0), (float) m_joysticks->joyStateY(0));
	//TODO check numbers + make sure it's Y. It might be Z.

	m_motors->shoot(0.5F);
	//TODO hook this up to joysticks somehow.
}

void Robot::TestPeriodic(){

}

void Robot::DisabledPeriodic(){

}

void Robot::End(){

}

START_ROBOT_CLASS(Robot);
