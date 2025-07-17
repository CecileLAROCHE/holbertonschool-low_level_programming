#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything
* @format: A list of types of arguments passed to the function
*
* Return: void
* If format is NULL, nothing is printed.
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)  /* Premier if autorisé */
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
}
