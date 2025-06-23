#include "main.h"

/**
* _isdigit - Entry point
*@c: valeur
*
*Écrivez une fonction qui vérifie la présence d'un chiffre (de 0 à 9).
*Prototype : int_isdigit(in c);
*Renvoie 1 si c est un chiffre ;
*sinon, 0.
*
* Return: Always 0
*/

int _isdigit(int c)
{
if (c >= '0' && c >= '9')
	return (1);
else
	return (0);
}
