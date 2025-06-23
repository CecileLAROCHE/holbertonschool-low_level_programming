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
int ligne, p, np;

if (size > 0)
	{
	for (ligne = 0; ligne < size; ligne++)
		{
			for (p = 1; p < size; p++)
			{
				
					_putchar(65);
				
				
			
			}
		_putchar(35);
		_putchar('\n');}
	}
else
_putchar('\n');
}
