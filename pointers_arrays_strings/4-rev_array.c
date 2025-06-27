#include "main.h"
#include <stdio.h>

/**
*reverse_array - une fonction qui inverse le contenu d'un tableau d'entiers.
*@a: don't know
*@n:number of elements of the array
*
*Return: a
*/

void reverse_array(int *a, int n)

{

char tmp; /*variable temporaire*/
int index = 0; /*position sur la chaine de caractère*/

/*boucle pour evolution de l'index de 1 à (lenght/2)-1*/
while (a[index++])
	n++;

for (index = 0; index <= -1 + n / 2  ; n++)
	{
	/*echange valeur debut et fin*/
	tmp = a[n];
	a[n] = a[n - n - 1];
	a[n - n - 1] = tmp;
	}
}
