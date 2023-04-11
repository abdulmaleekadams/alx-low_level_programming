#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy a string passed as a parameter into a memory
 *
 * @str: a pointer to a string
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int len, i;
	char *str_copy;

	/* Check if the string is NULL */
	if (str == NULL)
		return (NULL);
	
	/* Get the length of the string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate mem for the str_copy (plus one for the null terminator) */
	str_copy = (char *) malloc((len * sizeof(char)) + 1);

	/* Check if allocation failed */
	if (str_copy == NULL)
		return (NULL);

	/* Copy the content of the str to the str_copy */
	for (i = 0; i < len; i++)
		str_copy[i] = str[i];

	/* Add the null terminator to str_copy */
	str_copy[i] = '\0';

	return (str_copy);
}
