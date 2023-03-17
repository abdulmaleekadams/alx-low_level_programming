#include <stdlib.h>
#include <time.h>
/**
 * main - function that print a number is positve, negative or zero
 *
 * n - a variable value generated at random for every execution of the main
 *
 * Return: 0 is retuned to the OS if the main is successful
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive", n);
	else if (n < 0)
	printf("%d is negative", n);
	else
	printf("%d is zero", n);
	return (0);
}
