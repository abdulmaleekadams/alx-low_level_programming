/**
 * _isupper - a function returns 1 for uppercase letter
 * @c: letter to check
 *
 * Return: 0 if it's not uppercase and 1 for uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
