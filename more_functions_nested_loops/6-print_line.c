#include "main.h"

/**
*print_line: entry point
*@n:
*
*Écrivez une fonction qui trace une ligne droite dans le terminal.
*
*Prototype : void print_line(int n);
*Vous ne pouvez utiliser que la fonction _putchar pour afficher.
*Où n est le nombre de fois où le caractère _ doit être affiché.
*La ligne doit se terminer par un \n.
*Si n est inférieur ou égal à 0, la fonction doit uniquement afficher \n.
*
*/

void print_line(int n)
{
int i = 0;

if (n > 0)
{
	while (i = n, i++)
	{
	_putchar('_');
	}
}
_putchar('\n');
}

