#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Main - Entry point
 *
 * Return - Always (0) success
 *
 */

/* betty style doc for function main goes there */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/*check relation condition*/
	if (n > 0)
	{
		/*if condition is true then print this*/
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		/*if condition is true then print this*/
		printf("%d is negative\n", n);
	} else
	{
		/*if all above is not true then print this*/
		printf("%d is zero\n", n);
	}
		return (0);
}



