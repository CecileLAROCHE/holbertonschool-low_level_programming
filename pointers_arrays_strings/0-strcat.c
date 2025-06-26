#include "main.h"
#include <stdio.h>

/**
*_strcat - Écrivez une fonction qui concatène deux chaînes.
*@dest: rrrr
*@src: rrrr
*
*Cette fonction ajoute la chaîne src à la chaîne dest, écrasant l'octet
*nul de fin (\0) à la fin de dest, puis ajoute un octet nul de fin.
*Renvoie un pointeur vers la chaîne résultante dest.
*
*Return: chaine dans dest
*/

char *_strcat(char *dest, char *src)
{
int index1 = 0; /*position sur la chaine de caractère dest*/
int index2 = 0; /*position sur la chaine de caractère src*/
int index = 0; /*position sur la chaine de caractère final*/
int length1 = 0; /*longueur de la chaine de caratère*/
int length2 = 0; /*longueur de la chaine de caratère*/
int length = 0; /*longueur de la chaine de caratère*/

/*calcul du nombre de caractères*/
while (dest[index1++])
	length1++;
while (dest[index2++])
	length2++;
length = length1 + length2;

for (index = index1; src[index]; index++)
		dest[length++] = src[index];
dest[length++ + 1] = '\0';

	return (dest);

}
