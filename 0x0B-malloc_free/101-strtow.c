#include <stdlib.h>

/**
 * words_counter - counts the number of words in a string
 *
 * @str: the string to be counted
 *
 * Return: the number of words in @str
 */

int words_counter(char *str)
{
	int words = 0, i = 0;

	while (str[i])
	{
		/* If curr char is not a space and the next is, it's a word */
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;

		i++;
	}

	return (words);
}

/**
 * word_len - check the length of a word in a string
 *
 * @str: the string to be checked
 *
 * Return: the length of the pointed to by @str
 */

int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow = splits a string into words
 *
 * @str: the string to be split
 *
 * Return: A pointer to the array of word.
 *	Otherwise - NULL If allocation fails or str is NULL or Empty
 */

char **strtow(char *str)
{
	char **words_arr, *tmp;
	int i, j, wc = 0, len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in @str */
	wc = words_counter(str);

	/* Allocate memory for the words array */
	words_arr = malloc(sizeof(char *) * (wc + 1));

	/* Check if allocation is successful */
	if (words_arr == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		/* Skip over leading spaces */
		while (*str == ' ')
			str++;

		/* Get the length of the current word */
		len = word_len(str);

		/* Allocate memory for the current word */
		words_arr[i] = malloc(sizeof(char) * (len + 1));

		/* check if allocation fails */
		if (words_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words_arr[j]);

			free(words_arr);
			return (NULL);
		}

		tmp = words_arr[i];

		while (*str && *str != ' ')
			*tmp++ = *str++;

		*tmp = '\0';
	}

	words_arr[i] = NULL;

	return (words_arr);
}
