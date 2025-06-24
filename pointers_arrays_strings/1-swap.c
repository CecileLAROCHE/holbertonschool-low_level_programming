#include "main.h"

/**
*swap_int - main entry
*@a:pointer
*@b: POINTER
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
