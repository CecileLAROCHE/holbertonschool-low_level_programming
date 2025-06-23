#include "main.h"

/**
*print_most_numbers - entry point
*
*Écrivez une fonction qui affiche les nombres de 0 à 9,
*suivis d'un saut de ligne.
*
*Prototype : void print_most_numbers(void);
*N'affichez pas 2 et 4.
*Vous ne pouvez utiliser _putchar que deux fois dans votre code.
*
* Return: void
*/

void print_most_numbers(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
	{
	if ((num != '2') && (num != '4'))
		{
		_putchar(num);
		}
	}
_putchar('\n');
}
