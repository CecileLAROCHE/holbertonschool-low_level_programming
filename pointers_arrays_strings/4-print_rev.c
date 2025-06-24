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
int lenght;
int index = 0;

while (*s++)
	lenght++;
/*calcul nb caractère*/

for (index = lenght - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}
