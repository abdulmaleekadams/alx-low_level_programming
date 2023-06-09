#include <stdlib.h>
/**
 * _strpbrk - a function that searches for any of a set of bytes
 *
 * @s: the string
 * @accept: the set of character to be matched
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
