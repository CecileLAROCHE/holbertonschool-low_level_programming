#include "main.h"

/**
*print_diagonal - Entry point
*@n:nombre de caractère à afficher
*space: nb d'espace
*
*Écrivez une fonction qui trace une diagonale sur le terminal.
*
*Prototype : void print_diagonal(int n);
*Vous ne pouvez utiliser que la fonction _putchar pour afficher.
*Où n est le nombre d'impressions du caractère \.
*La diagonale doit se terminer par un \n.
*Si n est égal ou inférieur à 0, la fonction doit afficher uniquement un \n.
*
*Return: (0)
*/

void print_diagonal(int n)

{
int i;
int space;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
			_putchar('\\');
		if (i == n - 1)
		{
			continue;
		}
		_putchar('\n');
		}
}
_putchar('\n');
}

