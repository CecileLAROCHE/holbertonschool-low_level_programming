#include "main.h"


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

for (index = n - 1; index >= n / 2  ; index--)
	{
	/*echange valeur debut et fin*/
	tmp = a[index];
	a[index] = a[n - index - 1];
	a[n - index - 1] = tmp;
	


}
return(index)
}
