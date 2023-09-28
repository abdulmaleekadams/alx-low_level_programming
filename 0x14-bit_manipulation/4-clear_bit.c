#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that set the value of a bit to 0 at a given index
 * @n: value of a bit
 * @index: index, starting from 0 of the bit to get
 * Return: 1 for success or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n |= ~(1UL << index);
		return (1);
	}
}
