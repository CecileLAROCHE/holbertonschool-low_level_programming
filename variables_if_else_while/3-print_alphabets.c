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
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
putchar(alphabet);
for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
