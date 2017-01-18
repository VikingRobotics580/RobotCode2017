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
	this->m_control = new JoystickControl();
}

Robot::~Robot() {
	this->m_control->~JoystickControl();
	delete m_control;
}

void Robot::RobotInit() {
	this->m_control->init();
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

}

void Robot::TestPeriodic(){

}

void Robot::DisabledPeriodic(){

}

void Robot::End(){

}

START_ROBOT_CLASS(Robot);
