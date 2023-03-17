#include <stdio.h>

/**
 * main - A program to all letters except q and e
 * Return: it's value that is stored on the localost and returned to the OS
 */

int main(void)
{
	char alpha_ascii = 'a';

	while (alpha_ascii <= 'z')
	{
		if (alpha_ascii != 'q' && alpha_ascii != 'e')
		{
		putchar(alpha_ascii);
		}
		alpha_ascii++;
	}
	putchar('\n');
	return (0);
}
