#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_c - prints char
 * @c: the char
 *
 * Return: 0
 */
int print_c(va_list c)
{
	printf("%c", va_arg(c, int));
	return (0);
}
/**
 * print_i - prints integer
 * @i: the integer
 *
 * Return: 0
 */
int print_i(va_list i)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - prints floating numbers
 * @f: the floating number
 *
 * Return: 0
 */
int print_f(va_list f)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - prints string
 * @s: the string
 *
 * Return: 0
 */
int print_s(va_list s)
{
	char *str;

	s = va_arg(s, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all
 * @format: formay string that says arg types
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	char *sep1 = ", ";
	var_list anyArgs;
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(anyArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep);
				ops[j].f(anyArgs);
			}
			j++;
		}
		sep = sep2;
		i++;
	}
	printf("\n");
	va_end(anyArgs);
}
