#include "main.h"

/**
*_memcpy - main entry
*@dest: target
*@src: constant byte
*@n: number of byte
*
*ecrire un fonction qui copie l'espace memoire
*
*Return: returns new value of target
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
