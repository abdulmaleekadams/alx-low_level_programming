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
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
