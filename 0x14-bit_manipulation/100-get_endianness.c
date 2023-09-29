#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, else 1
 */

int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *)&x;

	return (*c);
}
