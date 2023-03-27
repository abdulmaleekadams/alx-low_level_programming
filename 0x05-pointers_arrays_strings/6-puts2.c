#include "main.h"
#include <string.h>
/**
 * puts2 - print every other char of a string, startiing from first char
 *
 * @str: the string parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	unsigned long int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
