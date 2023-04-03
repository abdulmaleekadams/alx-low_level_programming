/**
 * _strpbrk - a function that searches for any of a set of bytes
 *
 * @s: the string
 * @accept: the set of character to be matched
 *
 * Return: a pointer to the byte in s that matches one of the bytes in @accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
