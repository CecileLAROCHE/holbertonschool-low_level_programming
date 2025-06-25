#include "main.h"

/**
*print_rev - main entry
*@s: string
*lenght: lié à la longueur de la chaine
*
*
*Écrivez une fonction qui imprime une chaîne, à l'envers,
*suivie d'une nouvelle ligne.
*/

void print_rev(char *s)
{
int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
_putchar('\n');
}
