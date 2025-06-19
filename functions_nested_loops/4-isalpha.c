#include "main.h"

/**
* _isalpha - Entry point
* @c: The character to be checked.
*
*Écrivez une fonction qui vérifie la présence de caractères alphabétiques.
*Prototype : int _isalpha(int c);
*Renvoie 1 si c est une lettre, minuscule ou majuscule.
*Renvoie 0 sinon.
*
* Return: 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
