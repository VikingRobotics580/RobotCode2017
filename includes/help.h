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
		int factorial(int n);
		float sin(float x, int n); //Calculate sin using an infinite  series
		float cos(float x, int n); //the same but with cos
	}
}



#endif /* INCLUDES_HELP_H_ */
