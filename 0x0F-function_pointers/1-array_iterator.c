#include <stdlib.h>

/**
 * array_iterator - executes a func given as a param on each element of an arr
 * @array: the pointer to the array
 * @size: the size of the array
 * @action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
		exit(-1);

	for (idx = 0; idx < size; idx++)
		action(array[idx]);
}
