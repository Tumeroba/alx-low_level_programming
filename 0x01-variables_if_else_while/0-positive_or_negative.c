#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Main - Entry point
 *
 * Return - Always (0) success
 *
 */

/* a local variable difination*/
int main(void)

{
	int n;

	n = rand() - RAND_MAX / 2;

	/*check relation condition*/
	if (n > 0)
	{
		/*if condition is true then print this*/
		printf("is positive\n");
	} else if (n < 0)
	{
		/*if condition is true then print this*/
		printf("is negative\n");
	} else
	{
		/*if all above is not true then print this*/
		printf("is zero\n");
	}
		return (0);
}



