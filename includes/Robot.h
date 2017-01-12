/*
 * Robot.h
 *
 * Created 11 Jan 2017
 *
 * Header file for Robot.cpp
 *
 */

#ifndef INCLUDES_ROBOT_H_
#define INCLUDES_ROBOT_H_

#include <vector>

class Robot: public IterativeRobot{
	public:
		Robot(); //Constructor for the Robot class.
		~Robot(); //Destructor for the Robot class.
	protected:

		void RobotInit() override; //Called when robot is initialized
		void AutonomousInit() override; //Called when entering Autonomous mode
		void TeleopInit() override; //Called when entering Teleoperated mode
		void TestInit() override; //Called when entering test mode
		void DisabledInit() override; //Called when entering Disabled mode

		void AutonomousPeriodic() override; //Run periodically during Autonomous mode
		void TeleopPeriodic() override; //same thing as the last one what do you think
		void TestPeriodic() override;
		void DisabledPeriodic() override;

		void End(); //Called when robot is done.
	private:
		const bool IS_DRIVER_DUMB = true;
};

#endif /* INCLUDES_ROBOT_H_ */
