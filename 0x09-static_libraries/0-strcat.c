/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	/* store length of dest in the length variable */
	length = 0;
	while (dest[length] != '\0')
		length++;

	/* concatenate src to dest */
	for (j = 0; src[j] != '\0'; j++, length++)
		dest[length] = src[j];

	/* terminating the dest string */
	dest[length] = '\0';

	return (dest);
}
