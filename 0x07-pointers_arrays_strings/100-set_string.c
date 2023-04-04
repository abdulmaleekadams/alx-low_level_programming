/**
 * set_string: a function that sets the value of a pointer to a char
 *
 * @s: the pointer to change
 * @to: the value the pointer is changed to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
