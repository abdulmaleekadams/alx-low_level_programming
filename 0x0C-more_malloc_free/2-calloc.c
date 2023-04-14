#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * 
 * @nmemb: The number of element in the array
 * @size: The size of each elements in bytes
 *
 * Return: A pointer to the allocated memory
 *	NULL on failure or @nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
