#include "main.h"

/**
*void print_diagonal - Entry point
*@n:nombre de caractère à afficher
*
*Écrivez une fonction qui trace une diagonale sur le terminal.
*
*Prototype : void print_diagonal(int n);
*Vous ne pouvez utiliser que la fonction _putchar pour afficher.
*Où n est le nombre d'impressions du caractère \.
*La diagonale doit se terminer par un \n.
*Si n est égal ou inférieur à 0, la fonction doit afficher uniquement un \n.
*/

void print_diagonal(int n)

{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
	for (i = 0; i < (n); i++)
	{
		_putchar(' ');
	}
	_putchar('/');
_putchar('\n');
}
}

