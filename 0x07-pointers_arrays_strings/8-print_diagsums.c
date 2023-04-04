#include <stdio.h>

/**
 * print_diagsums - function that print sum of two diagonal of a square matrix
 *
 * @a: a pointer to the 2D square array
 * @size: size of the square array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + 1);
		sum2 += *(a + i * size + (size - i -1));
	}

	printf("%d, %d\n", sum1, sum2);
}
