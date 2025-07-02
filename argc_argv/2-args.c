#include <stdio.h>

/**
*main - Affiche tous les arguments reçus, un par ligne
*@argc: nombre d'arguments (y compris le nom du programme)
*@argv: tableau contenant les arguments
*
*Return: 0 (succès)
*/

int main(int argc, char *argv[])
{
int i;

/*Boucle pour parcourir tous les arguments*/
for (i = 0; i < argc; i++)
	{
	/*// Affiche l’argument actuel suivi d’un saut de ligne*/
	printf("%s\n", argv[i]);
	}
return (0);
}
