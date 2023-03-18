#include <stdio.h>

/**
 * main - a program that display all lower case of alphabet
 * Return: 0 is returned to the OS if the program is successful
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
	putchar(alpha);
	alpha--;
	}

	putchar('\n');
	return (0);
}
