#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all the args of a program
 *
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	/* Check ac is equal to 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Check the length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		/* Increment len by 1 for newline character */
		len++;
	}

	/* Memory allocation for the concatenated string */
	str = malloc(len * sizeof(char));

	/* Check if memory is allocated */
	if (str == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	/* Add the terminating null character */
	str[k] = '\0';

	return (str);
}
