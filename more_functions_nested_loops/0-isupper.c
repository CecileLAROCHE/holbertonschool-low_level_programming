#include "main.h"

/**
* _isupper - Entry point
*@c: valeur
*
*Écrivez une fonction qui vérifie les caractères majuscules.
*
* Return: Always 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
