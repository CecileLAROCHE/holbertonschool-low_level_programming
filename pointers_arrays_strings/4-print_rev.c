#include "main.h"

/**
*print_rev - main entry
*@s: string
*
*Écrivez une fonction qui imprime une chaîne, à l'envers,
*suivie d'une nouvelle ligne.
*/

void print_rev(char *s)
{
	while (*s)
	_putchar(*s--);
_putchar('\n');

}
