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
int index; /*position sur la chaine de caractère*/

/*calcul de la longeur de la chaine de caractère*/
while (*s++)
	length++;

/*boucle pour evolution de l'index de 1 à (lenght/2)*/
for (index = 0; index < length / 2 ; index++)
	{
	/*Swapping values of a and  b*/
	tmp = *(s + index);
	*(s + index) = *(s + length - index);
	*(s + length - index) = tmp;
	}
}
