#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Description: ecrire 10 fois l'alphabet en minucule
* suivi par une nouvelle ligne
*
* Return: 0
*/

void print_alphabet_x10(void)

{char alphabet;
char repetition;

for (repetition = '0'; repetition <= '9' ; repetition++)
{
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
}
