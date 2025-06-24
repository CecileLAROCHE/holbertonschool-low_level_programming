#include "main.h"

/**
*_puts - main entry
*@str: string
*
*Write a function that prints a string, followed by a new line, to stdout.
*/

void _puts(char *str)
{
	while (*str)
	_putchar(*str);
_putchar('\n');
}
