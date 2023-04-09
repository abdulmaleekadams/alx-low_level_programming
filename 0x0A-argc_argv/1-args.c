#include <stdio.h>

/**
 * main - a func that prints number of arguments passed into it
 *
 * @argc: counts of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
