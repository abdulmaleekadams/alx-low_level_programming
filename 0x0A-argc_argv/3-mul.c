#include <stdio.h>
#include <stdlib.h>

/**
 * main - a func that multiplies two numbers
 *
 * @argc: counts of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */

int main(int argc, char *argv[])
{
	int product, num1, num2;

	if ( argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
