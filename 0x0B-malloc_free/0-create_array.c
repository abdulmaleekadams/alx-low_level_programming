#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, & init with a special character
 *
 * @size: the size of the array
 * @c: the character
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	/* Memory Allocation */
	arr = (char *) malloc(size * sizeof(c));

	/* Check if memory allocation was successful */
	if (arr == NULL)
		return (NULL);

	/* Initializing the array with the given char */
	for (i = 0; i < size; i++)
		arr[i] = c;

	/* Return the pointer to the array */
	return (arr);
}
