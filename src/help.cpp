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

/*  PI
 * Calculate pi using an infinite series, to an arbitrary accuracy.
 * Returns float: an approximate value of pi
 * Arguments:
 *    int n: the distance in the series to compute to
 *
 * n must be sufficiently large to calculate a usable value of pi.
 */
float help::maths::pi(int n) {
	float ret = 0;
	for (int c = 0; c < n; c++) { //get it?
		ret += 1/(2*(float)c+1) * (c%2 == 0 ? 1 : -1);
	}
	return 4 * ret;
}

/* SIN / COS
 *
 * Calculates a value of sine or cosine using a Taylor series.
 * Returns float: an approximate value of the sine or cosine.
 * Arguments:
 *     float x: the value to take the sin or cosine of.
 *     int n: the number of non-zero Taylor series values to compute to
 *
 * n must be sufficiently large to calculate a usable value.
 * */

float help::maths::sin(float x, int n) {
	float ret = 0;
	int currPow;
	int currFac = 1;
	float currXPow = x; //Powers of numbers are stored instead of calculated on the fly
						//    in order to conserve computing power and time.
	for (int c = 0; c < n; c++) {
		currPow = (2*c+1); //Current power of this term in the Taylor series.
		ret += (float)currXPow / (float)currFac * (c%2 == 0 ? 1 : -1);
		currXPow *= x * x;
		currFac *= (currPow + 1) * (currPow + 2);
	}
	return ret;
}

float help::maths::cos(float x, int n) {
	float ret = 0;
	int currPow;
	int currFac = 1;
	float currXPow = 1;
	for (int c = 0; c < n; c++) {
		currPow = (2*c);
		ret += (float)currXPow / (float)currFac * (c%2 == 0 ? 1 : -1);
		currXPow *= x * x;
		currFac *= (currPow + 1) * (currPow + 2);
	}
	return ret;
}
