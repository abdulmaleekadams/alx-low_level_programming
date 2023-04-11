#include <stddef.h>
#include <stdlib.h>

/**
 * str_len - checks for the length of a string
 *
 * @str: the string
 *
 * Return: the length of the string
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_copy - copy a string to another memory
 *
 * @str: the string
 * @idx: the starting index to start copying
 * @len: the length of the string
 * @dest: the memory to copy the str
 *
 * Return: nothing
 */

void str_copy(char *str, int idx, int len, char *dest)
{
	int i;

	for (i = 0; i < len; i++)
		dest[idx + i] = str[i];
}

/**
 * str_concat - concatenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string or NULL if failure;
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int len1, len2;

	/* Handle NULL string as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the length of the two strings */
	len1 = str_len(s1);
	len2 = str_len(s2);

	/* Allocate memory for concatenated string */
	str_concat = (char *) malloc((len1 + len2) * sizeof(char) + 1);

	/* Check if allocation failed */
	if (str_concat == NULL)
		return (NULL);

	/* Copy the content of both str into str_concat */
	str_copy(s1, 0, len1, str_concat);	
	str_copy(s2, len1, len2, str_concat);

	/* Add the null terminator */
	str_concat[len1 + len2] = '\0';

	return (str_concat);
}
