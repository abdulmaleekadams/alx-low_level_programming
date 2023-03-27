/**
 * swap_int - a function that swap the values of two integers
 *
 * @a: an int pointer of first number parameter
 * @b:  an int pointer of second number parameter
 *
 * Return: nothing is returned.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
