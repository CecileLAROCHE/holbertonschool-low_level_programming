#include "variadic_functions.h"
#include <stdarg.h>

/**
* * sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters
*
* Return: The sum of all parameters, or 0 if n is 0
* If no parameters are passed, returns 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
		total += va_arg(ap, int);
	va_end(ap);

	return (total);
}
