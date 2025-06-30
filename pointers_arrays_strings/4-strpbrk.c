#include "main.h"
#include <stddef.h>

/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: The string to search.
*@accept: The string containing the bytes to match.
*
*Return: A pointer to the byte in s that matches one of the bytes in accept,
*or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
int index;

while (*s != '\0')
{
for (index = 0; accept[index] != '\0'; index++)
{
if (*s == accept[index])
{
return (s);
}
}
s++;
}
return (NULL);
}
