/**
 * _memcpy - a function that copies memory area
 *
 * @dest: where to copy memory area to
 * @src: memory area to copy from
 * @n: number of byte to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n--)
		dest[n] = src[n];

	return (dest);
}
