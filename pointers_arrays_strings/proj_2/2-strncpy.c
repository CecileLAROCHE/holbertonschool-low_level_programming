#include "main.h"

/**
*_strncpy - fonction qui copie une chaîne.
*@dest: destination
*@src: second char
*@n: troisième
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)

{
int index = 0; /*position sur la chaine de caractère*/


for (index = 0 ; index < n && src[index] != '\0' ; index++)
dest[index] = src[index];

for ( ; index < n ; index++)
dest[index] = '\0';

return (dest);
}
