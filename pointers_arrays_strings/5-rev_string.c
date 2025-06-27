#include "main.h"

/**
*rev_string - main entry
*@s: string
*
*Écrivez une fonction qui inverse une chaîne.
*/

void rev_string(char *s)

{
int length = 0; /*longueur de la chaine de caratère*/
char tmp; /*variable temporaire*/
int index = 0; /*position sur la chaine de caractère*/

/*boucle pour evolution de l'index de 1 à (lenght/2)-1*/
while (s[index++])
	length++;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
