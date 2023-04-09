#include <stdio.h>
#include <stdlib.h>


/**
 * main - a func that prints the minimum number of coins to make change
 *
 * @argc: counts of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */


int main(int argc, char *argv[])
{
	int num_of_coin = 0;
	int idx = 0, cent;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");

		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");

		return (0);
	}

	for (idx = 0; coins[idx] != '\0' && cent != 0; idx++)
	{
		num_of_coin += cent / coins[idx];
		cent %= coins[idx];
	}
	printf("%d\n", num_of_coin);

	return (0);
}
