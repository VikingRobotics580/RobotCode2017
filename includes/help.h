/*
 * help.h
 *
 * Created 12 Jan 2017
 *
 * Help header file
 *
 */


#ifndef INCLUDES_HELP_H_
#define INCLUDES_HELP_H_

namespace help {
	namespace strings {}
	namespace maths{
		float pi(int n); //Calculate pi to an arbitrary accuracy
		float sin(float x, int n); //Calculate sin using an infinite  series
		float cos(float x, int n); //the same but with cos
	}
	namespace logging {

		void info(std::string text); //Log info to console
		void test(std::string text); //Debug info to console.
		void warn(std::string text); //Warn error to console.
		void error(std::string text);//Scream loudly at user.

		void log(std::string text); //Alias of info.
	}
}



#endif /* INCLUDES_HELP_H_ */
