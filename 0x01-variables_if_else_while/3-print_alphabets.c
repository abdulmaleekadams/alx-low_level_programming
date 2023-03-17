#include <stdio.h>

/**
 * main - a program that display all lower case of alphabet followed by
 * the uppercase of the alphabet
 * Return: 0 is returned to the OS if the program is successful
 */

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	while (lower_alpha <= 'z')
	{
	putchar(lower_alpha);
	lower_alpha++;
	}

	while (upper_alpha <= 'Z')
	{
	putchar(upper_alpha);
	upper_alpha++;
	}

	putchar('\n');
	return (0);
}
