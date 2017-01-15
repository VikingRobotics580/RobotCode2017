/*
 * JoystickControl.h
 *
 *  Created on: Jan 14, 2017
 *      Author: Maxwell
 */

#ifndef INCLUDES_JOYSTICKCONTROL_H_
#define INCLUDES_JOYSTICKCONTROL_H_

#include <vector>
#include "WPILib.h"

class Robot;

class JoystickControl {
	public:
		JoystickControl();
		~JoystickControl();
		int init();
		bool buttonState(int button);
		double joyStateX(int joystick);
		double joyStateY(int joystick);
		double joyStateZ(int joystick);
	private:
		const int NUM_BUTTONS = 5;
		const int NUM_JOYSTICKS = 2;
		JoystickButton* m_buttons [NUM_BUTTONS];
		Joystick* m_joysticks [NUM_JOYSTICKS];
};



#endif /* INCLUDES_JOYSTICKCONTROL_H_ */
