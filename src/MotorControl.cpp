/*
 * MotorControl.cpp
 *
 *  Created on: Jan 17, 2017
 *      Author: Maxwell
 */

#include "MotorControl.h"

MotorControl::MotorControl() {
	for(int i = 0; i < 4; i++) {
		this->m_talons[i] = new CANTalon(i);
	}
	this->m_driver = new RobotDrive(m_talons[0],m_talons[1],m_talons[2],m_talons[3]);
		//Shame we don't have JS ... notation.

}

MotorControl::~MotorControl() {
	for (int i = 0; i < 4; i++) {
		delete this->m_talons[i];
	}
}

int MotorControl::init() {
	return 0; //omg it worked
}


/*
 * MotorControl::move
 *
 * Moves robot.
 * 	 float left: value of left joystick
 * 	 float right: value of right joystick
 *
 * */
int MotorControl::move(float left, float right) {
	this->m_driver->TankDrive(-left, right); //Note to self - add thing.
	//TODO add thing
	return 0;
}
