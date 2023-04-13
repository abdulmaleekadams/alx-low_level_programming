#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: the number of bytes of @s2
 *
 * Return: Pointer to the new string, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, len1, len2;
	char *s_concat;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	s_concat = malloc(sizeof(char) * (n + len1) + 1);
	if (s_concat == NULL)
		return (NULL);

	for (idx = 0; idx < len1; idx++)
		s_concat[idx] = s1[idx];

	for (idx = 0; idx < n; idx++)
		s_concat[len1 + idx] = s2[idx];
	s_concat[len1 +n] = '\0';

	return (s_concat);
}
