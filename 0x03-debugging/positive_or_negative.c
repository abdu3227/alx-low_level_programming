#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more header goes here*/

/**
 * positive_or_negative - determine wheather integer is + or -
 *@n: integer to be tested
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

}
