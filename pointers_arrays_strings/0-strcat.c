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
int index = 0; /*position sur la chaine de caractère*/
int length = 0; /*longueur de la chaine de caratère*/

/*calcul du nombre de caractères*/
while (dest[index++])
length++;

for (index = 0; src[index]; index++)
{
dest[length++] = src[index];
}

return (dest);
}
