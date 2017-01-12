/*
 * help.h
 *
 * Created 12 Jan 2017
 *
 * Helper methods
 *
 */

#include "help.h"

/* Calculate pi using an infinite series, to an arbitrary accuracy.
 * Returns float: an approximate value of pi
 * Arguments:
 *    int n: the distance in the series to compute to
 */
float help::math::pi(int n) {
	float ret = 0;
	for (int c = 0; c < n; c++) { //get it?
		ret += 1/(2*(float)c+1) * (c%2 == 0 ? 1 : -1);
	}
	return 4 * ret;
}
