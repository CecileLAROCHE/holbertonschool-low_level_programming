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

for (index = 0; index <= -1 + length / 2  ; index++)
	{
	/*echange valeur debut et fin*/
	tmp = s[index];
	s[index] = s[length - index - 1];
	s[length - index - 1] = tmp;
	}
}
