#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers
 *
 * @a: the array of integers parameter
 * @n: the number of elements in the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
