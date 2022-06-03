/*
 *File: 0-positive_or_negative.c
 *Auth: github.com/udeani
 */


#include <stdlib.h>
#include <time.h>

/**main - Prints a random number and checks if the number is positive,
 *     negetive,
 *     or zero.
 *
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
