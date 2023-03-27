#include <string.h>
#include "main.h"

/**
 * print_rev - a func that prints a string in reverse, followed by a new line
 *
 * @s: string parameter to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	unsigned long int i = strlen(s);

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
