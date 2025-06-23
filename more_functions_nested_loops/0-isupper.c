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
if (c >= 'a' && c <= 'z')
	return (0);
else
	return (1);
}
