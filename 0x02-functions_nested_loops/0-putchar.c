#include "main.h"
#include <string.h>

/**
 * main - a function that print "_putchar" followed by a new line
 *
 * Return: 0 if the function execute successsfully
 */

int main(void)
{
	char message[8] = "_putchar";

	int message_length = strlen(message);

	int i = 0;

	while (i < message_length)
	{
		_putchar(message[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
