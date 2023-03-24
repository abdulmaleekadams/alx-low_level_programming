#include "main.h"
/**
 * print_most_numbers - a function to print 0 t0 9 except 2 and 4
 *
 * Return: it returns nothing
 */

void print_most_numbers(void)
{
	int digit = 48;

	while (digit < 58)
	{
		if (digit == 50 || digit == 52)
		{
			digit++;
			continue;
		}
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
