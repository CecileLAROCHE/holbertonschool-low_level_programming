#include "main.h"

/**
* main - Entry point
*
* Description: ecrire 10 fois l'alphabet en minucule
* suivi par une nouvelle ligne
*
* Return: 0
*/
int main(void)
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
	return (0);
}
