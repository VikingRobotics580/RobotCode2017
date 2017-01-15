/*
 * Robot.h
 *
 * Created 14 Jan 2017
 *
 * Robot Control file
 *
 */

#include "JoystickControl.h" //I have no idea why, but Eclipse allowed me to omit this line.
#include "WPILib.h"

JoystickControl::JoystickControl() {
	for (int i = 0; i < NUM_JOYSTICKS; i++) {
		m_joysticks[i] = new Joystick(i); //If we don't start with Joysticks 0 and 1 we need to change this.
	}
	for (int i = 0; i < NUM_BUTTONS; i++) {
		m_buttons[i] = new JoystickButton(i);
	}
}

JoystickControl::~JoystickControl() {

}

int JoystickControl::init() {
	return 0;
}

bool JoystickControl::buttonState(int button) {
	return m_buttons[button]->Get();
}

double JoystickControl::joyStateX(int joystick) {
	return m_joysticks[joystick]->GetX();
}

double JoystickControl::joyStateY(int joystick) {
	return m_joysticks[joystick]->GetY();
}

double JoystickControl::joyStateZ(int joystick) {
	return m_joysticks[joystick]->GetZ();
}

