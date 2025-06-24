#include "main.h"

/**
*swap_int - main entry
*@a: première int
*@b: seconde int
*
*Écrivez une fonction qui échange les valeurs de deux entiers.
*/

void swap_int(int *a, int *b)
{
int c, d;

c = *a;
d = *b;

*a = d;
*b = c;
}
