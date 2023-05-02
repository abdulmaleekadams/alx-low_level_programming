#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: struct to traverse
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
