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
int lenght;
int index = 0;

while (str[index] != '\0')
	lenght++;

for (index = 0; index < lenght; index += 2)
{
_putchar(str[index]);
}
_putchar('\n');
}
