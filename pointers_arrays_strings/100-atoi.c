#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_atoi - entry point
*@s:
*
*Écrivez une fonction qui convertit une chaîne en entier.
*
*le nb dans la chaîne peut être précédé d'un nombre infini de caractères.
*Vous devez tenir compte de tous les signes - et + avant le nombre.
*Si la chaîne ne contient aucun nombre, la fonction doit renvoyer 0.
*Vous n'êtes pas autorisé:
*- à utiliser long.
*- à déclarer de nouvelles variables de type tableau.
*- à coder en dur des valeurs spéciales.
*Nous utiliserons l'option gcc -fsanitize=signed-integer-overflow
*pour compiler votre code.
*
*/

int _atoi(char *s)
{
int index = 0; /*position sur la chaine de caractère*/
int res = 0; /*resultat*/
int sign = 1; /*gestion signe*/

/*festion du sihne de la chaine de caractère*/
	if (s[0] == '-')
	{
		sign = -1;
		index = 1;
	}

for (s; s[index] != '\0'; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			res = res * 10 + (s[index] - '0');
		}
		else
		{
			return (0); /*Invalid input*/
		}
	}
return (sign * res);

}
