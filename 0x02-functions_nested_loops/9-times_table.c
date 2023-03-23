#include "main.h"

/**
 * times_table - a function that prints the multiplication table of 0 to 9
 *
 * Return: doesn't return anything
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			int product = row * column;

			if ( column== 0)
				_putchar(product + '0');
			
			else
			{
				if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}

				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
