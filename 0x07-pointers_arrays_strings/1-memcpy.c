/**
 * _memcpy - a function that copies memory area
 *
 * @dest: where to copy memory area to
 * @src: memory area to copy from
 * @n: number of byte to be copied
 *
 * Return: a pointer to dest
 */
i
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
