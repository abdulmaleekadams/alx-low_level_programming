#include <stdlib.h>

/**
 * array_range - create an arrays of integers
 * 
 * @min: the minimum value of the range (inclusive)
 * @max: the maximum value of the range (inclusive)
 *
 * Return: A pointer to the newly created array
 * 		NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
