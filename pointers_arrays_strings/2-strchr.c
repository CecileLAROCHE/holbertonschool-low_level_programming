#include "main.h"
#include <stddef.h>
/**
*_strchr - main entry
*@s: target
*@c: constant byte
*
*ecrire un fonction qui copie l'espace memoire
*
*Return: returns new value of target
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
return (NULL);
}
