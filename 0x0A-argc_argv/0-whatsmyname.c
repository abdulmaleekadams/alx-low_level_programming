#include <stdio.h>

/**
 * main - a func that prints its program name
 *
 * @argc: counts of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
