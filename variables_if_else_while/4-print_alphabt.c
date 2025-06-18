#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: Write a program that prints the alphabet in lowercase,
* followed by a new line.
*- Print all the letters except q and e
*- You can only use the putchar function (every other function is forbidden)
*- All your code should be in the main function
*- You can only use putchar twice in your code
*
*Return: 0
*/
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
else
{
;
}
putchar('\n');
return (0);
}
