#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: Longer description of the function
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5", n, 10 % n);
else if (n % 10 < 6)
printf("Last digit of %d is %d and and is 0", n, 10 % n);
else
printf("Last digit of %d is %d and is less than 6 and not 0", n, 10 % n);
return (0);
}
