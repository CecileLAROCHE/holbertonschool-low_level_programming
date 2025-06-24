#include "main.h"

/**
*print_triangle - Prints a squareusing the character #.
*@size: The size of the square.
*
*Écrivez une fonction qui affiche un carré, suivi d'un retour à la ligne.
*
*/

void print_triangle(int size)

{
int hash;
int index;

if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');
			for (index = 0; index < hash; index++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
_putchar('\n');
}
