/*
 * help.h
 *
 * Created 12 Jan 2017
 *
 * Helper methods
 *
 */

#include "help.h"
#include "math.h"

/* Calculate pi using an infinite series, to an arbitrary accuracy.
 * Returns float: an approximate value of pi
 * Arguments:
 *    int n: the distance in the series to compute to
 */
float help::maths::pi(int n) {
	float ret = 0;
	for (int c = 0; c < n; c++) { //get it?
		ret += 1/(2*(float)c+1) * (c%2 == 0 ? 1 : -1);
	}
	return 4 * ret;
}

int help::maths::factorial(int n) {
 //TODO: finish this
}

float help::maths::sin(float x, int n) {
	float ret = 0;
	int currPow;
	int currFac = 1;
	float currXPow = x;
	for (int c = 0; c < n; c++) {
		currPow = (2*c+1);
		ret += (float)currXPow / (float)currFac * (c%2 == 0 ? 1 : -1);
		currXPow *= x * x;
		currFac *= (currPow + 1) * (currPow + 2);
	}
	return ret;
}
