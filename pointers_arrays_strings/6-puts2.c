#include "main.h"

/**
*puts2 - main entry
*@str: string
*
*Écrivez une fonction qui affiche un caractère sur deux d'une chaîne,
*en commençant par le premier caractère, suivi d'une nouvelle ligne.
*/

void puts2(char *str)
{
int lenght = 0;
int index;

while (*str++)
	lenght++;
/*calcul nb caractère*/

for (index = 0; index < lenght; index +=2)
_putchar(str[index]);

_putchar('\n');

}
