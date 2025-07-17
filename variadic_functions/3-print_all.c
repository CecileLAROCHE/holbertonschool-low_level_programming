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
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
		printf("%s", separator);
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
		separator = ", ";
		}
		i++;
	}
	printf("\n");
}
