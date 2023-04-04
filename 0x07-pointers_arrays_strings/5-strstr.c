#include <stdlib.h>
/**
 * _strstr - a function that locates a substring
 *
 * @haystack: the main string
 * @needle: the substring to be searched for
 *
 * Return: a pointer to the beginning of the @needle located or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		while (needle[i])
		{
			if (haystack[i] != needle[i])
				break;
			i++;
		}

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
