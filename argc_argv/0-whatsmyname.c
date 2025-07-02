#include <stdio.h>

/**
*main - Point d'entrée du programme
*@argc: Nombre d'arguments passés au programme (non utilisé ici)
*@argv: Tableau contenant les arguments passés au programme
*
*Return: Toujours 0 (succès)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
