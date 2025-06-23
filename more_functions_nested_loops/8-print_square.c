#include "main.h"

/**
*print_square - Prints a squareusing the character #.
*@size: The size of the square.
*
*Écrivez une fonction qui affiche un carré, suivi d'un retour à la ligne.
*
*Prototype : void print_square(int size);
*Vous ne pouvez utiliser que la fonction _putchar pour afficher.
*Où size correspond à la taille du carré.
*Si size est inférieur ou égal à 0,
*la fonction affiche uniquement un retour à la ligne.
*
*Utilisez le caractère # pour afficher le carré.
*/

void print_square(int size)

{
int i, n;

if (size > 0)
for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}
else
_putchar('\n');
}
