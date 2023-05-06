#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * flip_bits -  function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number to be flipped
 * @m: second number to be filled
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}

	return (count);
}
