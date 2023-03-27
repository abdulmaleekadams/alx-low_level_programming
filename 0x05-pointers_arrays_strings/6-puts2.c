#include "main.h"

/**
 * puts2 - print every other char of a string, startiing from first char
 *
 * @str: the string parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
