#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main -Entry point
 *
 * Return -always (0)success
 *
 */
/*
 * local variable defination
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("the last digit of %d", n);

	if(n > 5)
       	{
		printf(" is and is greater than 5\n");
	} if(n == 0)
       	{
		printf(" is and is zero"); 
	} if(n < 6 & (n!=0)) {
		printf(" is and is less than 6 and not 0\n"); }

	return (0);

}
