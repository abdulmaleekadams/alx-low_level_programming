#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint -  function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
		return (0);
		}

		uint = uint << 1;
		uint += (*b - '0');

	}

	return (uint);
}
