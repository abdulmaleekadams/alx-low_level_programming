#include <stdio.h>

/**
 * positive_or_negative - a function to check if a number is positive, negative or zero
 *
 * Return: it returns nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
