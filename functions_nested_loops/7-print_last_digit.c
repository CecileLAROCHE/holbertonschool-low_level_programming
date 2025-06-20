#include "main.h"

/**
* print_last_digit - Entry point
* @n: The character to be checked.
*
*Écrivez une fonction qui affiche le dernier chiffre d'un nombre.
*
*Prototype : int print_last_digit(int);
*Renvoie la valeur du dernier chiffre.
*
* Return: print_last_digit
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);

}
