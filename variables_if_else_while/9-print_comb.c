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
int num;

for (num = '0' ; num <= '9' ; num++)
{
putchar(num);

if (num < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
