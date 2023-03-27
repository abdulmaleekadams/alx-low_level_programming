/**
 * _strcpy - a func that copies a string from a src to another destination
 *
 * @dest: parameter of where string should be copied to
 * @src: parameter of where to copy string from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
