#include "main.h"

/**
 * print_numbers - a function to print numbers, from 0 to 9
 *
 * Return: the function doesn't return anything
 */

void print_numbers(void)
{
	int digit = 48;

	while (digit < 58)
	{
		_putchar(digit);
		digit++;
	}

	_putchar('\n');
}
