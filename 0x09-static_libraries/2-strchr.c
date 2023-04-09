#include <stdlib.h>
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: the string parameter
 * @c: the character to be searched for
 *
 * Return: a pointer to the first occurence of the character or NULL
 */

char *_strchr(char *s, char c)
{
	/* Loop through the string to search for the character */
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
