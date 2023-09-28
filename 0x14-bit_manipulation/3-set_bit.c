#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that set the value of a bit to 1 at a given index
 * @n: value of a bit
 * @index: index, starting from 0 of the bit to get
 * Return: the value of the bit at index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n |= 1u1 << index;
		return (1);
	}
}
