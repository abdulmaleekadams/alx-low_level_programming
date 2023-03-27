#include <string.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * @str: the string parameter
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n = (length_of_the_string - 1) / 2;
	int index = length_of_the_string / 2;

	if (length_of_the_string % 2 == 0)
	{
		while (index < length_of_the_string)
		{
			_putchar(str[index]);
			index++;
		}
	}
	else
	{
		while (n + 1 < length_of_the_string)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
