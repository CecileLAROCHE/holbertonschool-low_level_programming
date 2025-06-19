#include "main.h"

/**
* print_sign - Entry point
* @n: The character to be checked.
*
*Écrivez une fonction qui affiche le signe d'un nombre.
*
*Prototype : int print_sign(int n);
*Renvoie 1 et affiche + si n est supérieur à zéro
*Renvoie 0 et affiche 0 si n est nul
*Renvoie -1 et affiche - si n est inférieur à zéro
*
* Return: 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
		{
		_putchar('+');
		return (-1);
		}
}
