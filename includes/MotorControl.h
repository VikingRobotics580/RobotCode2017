/*
 * MotorControl.h
 *
 *  Created on: Jan 17, 2017
 *      Author: Maxwell
 */

#ifndef INCLUDES_MOTORCONTROL_H_
#define INCLUDES_MOTORCONTROL_H_

#include "WPILib.h"

class MotorControl {
	public:
		MotorControl();
		~MotorControl();
		int init();
		int move(float left, float right); //Moves robot.
		int shoot(float value); //who the fuck knows
	private:
		const int NUM_TALONS = 5; //there better fucking be 4 or more
		RobotDrive* m_driver;
		SpeedController* m_talons[NUM_TALONS];
};



#endif /* INCLUDES_MOTORCONTROL_H_ */
