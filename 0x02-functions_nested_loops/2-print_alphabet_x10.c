#include "main.h"

/**
 * print_alphabet_x10 - a function to print all alphabet x10 on a new line
 *
 * Return: it returns nothing
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		print_alphabet();
		counter++;
	}
}
