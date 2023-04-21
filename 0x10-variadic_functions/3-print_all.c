#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - print char
 * @args: list of arguments
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_i - print integers
 * @args: list of arguments
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_f - print floating numbers
 * @args: list of arguments
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_s - print a string
 * @args: list of arguments
 */
void print_s(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
 * print_all - prints any arg passed as a param in specified format
 * @format: format string containing the types of args passed to the func
 */
void print_all(const char* const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *separator = "";
	format_t formats[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{0, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j =0;
		while (formats[j].f != NULL)
		{
			if (formats[j].c == format[i])
			{
				printf("%s", separator);
				formats[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
