#include "main.h"
#include <stdio.h>

/**
*print_array - entry
*@a: tableau d'entier
*@n: le nombre d'éléments du tableau à afficher.
*
*Écrivez une fonction qui affiche n éléments d'un tableau d'entiers,
*suivis d'un saut de ligne.
*
**Prototype : void print_array(int *a, int n);
**Les nombres doivent être séparés par une virgule, suivie d'un espace.
**Les nombres doivent être affichés dans le même ordre que celui dans
**lequel ils sont stockés dans le tableau.
**Vous pouvez utiliser printf.
*/

void print_array(int *a, int n)
{
int index = 0;/*position sur la chaine de caractère*/

for (index = 0; index < n ; index++)
	{
	printf("%d", a[index]);

if (index == n - 1)
	{
	continue;
	}
printf(", ");
}

putchar('\n');
}

