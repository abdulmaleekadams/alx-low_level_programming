#include <stdio.h>
#include <stdarg.h>
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
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
	    switch (format[i])
	    {
		    case 'c':
			    print_c(args);
			    break;
		    case 'i':
			    print_i(args);
			    break;
		    case 'f':
			    print_f(args);
			    break;
		    case 's':
			    print_s(args);
			    break;
		    default:
			    break;
	    }
	    if (format [i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
				    || format[i] == 's' || format[i] == 'f'))
		    printf(", ");
	    i++;
    }
    printf("\n");
    va_end(args);
}   
