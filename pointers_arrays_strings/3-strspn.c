#include "main.h"

/**
 * yu 
*_strspn - Get the length of a prefix substring
*@s: the string to be scanned
*@accept: the string containing the list of characters to match
*
*Return: the number of bytes in the initial segment of s
*which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;

while (*s)
	{
	a = accept;
	while (*a)
		{
		if (*s == *a)
		{
			break;
		}
		a++;
		}
		if (*a == '\0')
			return (count);
		count++;
		s++;
	}
	return (count);
}
