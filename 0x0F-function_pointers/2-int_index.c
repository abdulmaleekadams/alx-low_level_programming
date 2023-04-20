#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: a pointer to the array
 * @size: the array size
 * @cmp: pointer the function to be used to compare values
 *
 * Return: the index of the first elemrnt which cmp != 0, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
			return (idx);
	}
	return (-1);
}
