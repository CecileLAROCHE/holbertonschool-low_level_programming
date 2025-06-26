#include "main.h"

/**
*_strncat - main entry
*@dest: première int
*@src: seconde int
*@n: troisième
*
*Écrivez une fonction qui concatène deux chaînes.
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int index = 0; /*position sur la chaine de caractère*/
int length = 0; /*longueur de la chaine de caratère*/

/*calcul du nombre de caractères*/
while (dest[index++])
length++;

for (index = 0; src[index] && index < n ; index++)
{
dest[length++] = src[index];
}

return (dest);
}
