#include <string.h>
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a m=new line
 *
 * @str: string parameter to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	long unsigned int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
