#include "main.h"

/**
*_strcpy - copies the string pointed to by src
*@dest: buffer
*@src: ff
*
*Écrivez une fonction qui copie la chaîne pointée par src,
*y compris l'octet nul de fin (\0), dans le tampon pointé par dest.
*Valeur de retour : le pointeur vers dest
*
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int index;/*position sur la chaine de caractère*/

for (index = 0; src[index] != '\0'; index++)
	{
	dest[index] = src[index];
	}

	dest[index] = '\0';

return(dest);
}
