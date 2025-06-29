#include "main.h"
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
*Return: result
*/

int _atoi(char *s)
{
int index = 0; /*position sur la chaine de caractère*/
int res=0; /*resultat*/
int compteur = 0; /*compte no '-'*/
int sign = 1;/*gestion signe*/
int lenght = 0; /*sert pour le calcul du signe*/
int first = 0; /*premier chiffre*/
int last = 0; /*dernier chiffre à prendre en compte*/
int len = 0; /*longueur du chiffre*/


while (s[index] != '\0') /*parcour de la chaine*/
	{
	/*determiation first*/
	if (s[index] >= '0' &&  s[index] <= '9')
		{
		first = index;
		break;
		}
	index++;
	}
	/*determiation last à partir de first */
	index = first;
	while (s[index] >= '0' && s[index] <= '9')
	{
		last = index;
		index++;
	}
/*gestion du signe de la chaine de caractère*/
for (index = 0; index < first; index++)
{
if (s[index] == '-')
	{
	compteur++;
	}
	if (compteur % 2 == 1)
	{
		sign = -1;
	}
}
/*recupération des chiffres de fisrt à last*/
for (len = first; len <= last ; len++)
	{
	res = res * 10 + (s[len] - '0');
	}
}
return (res * sign);
}
