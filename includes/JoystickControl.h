/*
 * JoystickControl.h
 *
 *  Created on: Jan 14, 2017
 *      Author: Maxwell
 */

#ifndef INCLUDES_JOYSTICKCONTROL_H_
#define INCLUDES_JOYSTICKCONTROL_H_

class Robot;

class JoystickControl {
	public:
		JoystickControl();
		~JoystickControl();
		int init();
		bool buttonState(int button);
		double joyState(int joystick);
};



#endif /* INCLUDES_JOYSTICKCONTROL_H_ */
