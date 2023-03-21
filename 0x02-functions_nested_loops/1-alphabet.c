#include "main.h"

/**
 * print_alphabet - a function to print the alphabet, in lowercase, followed by a new line
 *
 * Return - nothing is returned 
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
