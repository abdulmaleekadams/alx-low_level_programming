#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random password
 *
 * Return: Always success 0.
 */

int main(void)
{
	int i, password_length = 11;
	char password[12];

	/* Random number generator */
	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		/* Generate random printable ASCII character */
		password[i] = rand() % 94 + 32;
	}
	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
