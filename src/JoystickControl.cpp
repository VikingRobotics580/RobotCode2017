/*
 * Robot.h
 *
 * Created 14 Jan 2017
 *
 * Robot Control file
 *
 */

#include "JoystickControl.h" //I have no idea why, but Eclipse allowed me to omit this line.

JoystickControl::JoystickControl() {

}

JoystickControl::~JoystickControl() {

}

int JoystickControl::init() {
	return 0;
}

bool JoystickControl::buttonState(int button) {
	return false;
}

double JoystickControl::joyState(int joystick) {
	return 0.00;
}


