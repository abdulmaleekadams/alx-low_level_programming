#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: string to be printed between char
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(stringArgs, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(stringArgs);
	printf("\n");
}
