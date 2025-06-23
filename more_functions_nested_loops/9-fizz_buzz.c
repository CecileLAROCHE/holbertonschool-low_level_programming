#include <stdio.h>

/**
*Main - entry point
*num: jjjjjjjj
*
*Le test « Fizz-Buzz » est une question d'entretien conçue pour éliminer
*les 99,5 % des candidats à un poste de programmeur qui ne parviennent pas
*à se sortir d'un sac en papier mouillé.
*
*Écrivez un programme qui affiche les nombres de 1 à 100,
*suivis d'une nouvelle ligne.
*Mais pour les multiples de 3, écrivez Fizz au lieu du nombre,
*et pour les multiples de 5, écrivez Buzz.
*Pour les nombres multiples de 3 et de 5, écrivez FizzBuzz.
*
*Chaque nombre ou mot doit être séparé par un espace.
*Vous êtes autorisé à utiliser la bibliothèque standard.
*
* Return: 0
*/

int main(void)
{
char num;

for (num = 1 ; num <= 100 ; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
	printf("FizzBuzz");
}
else if (num % 3 == 0)
	{
	printf("Fizz");
	}
	else if (num % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d", num);
		}
if (num < 100)
printf(" ");
}
printf("\n");
return (0);
}
