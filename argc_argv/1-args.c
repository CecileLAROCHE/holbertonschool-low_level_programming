#include <stdio.h>

/**
*main - Affiche le nombre d'arguments et tous les arguments
*@argc: Nombre d'arguments passés au programme
*@argv: Tableau contenant les arguments sous forme de chaînes
*
*Return: Toujours 0 (succès)
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
