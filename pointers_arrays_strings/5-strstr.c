#include "main.h"
#include <stddef.h>

/**
*_strstr - Locates a substring.
*@haystack: The string to be searched.
*@needle: The substring to search for.
*
*Return: A pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
int index;

while (*haystack != '\0')
{
for (index = 0; needle[index] != '\0'; index++)
{
if (*haystack == needle[index])
{
return (haystack);
break;
}
}
haystack++;
}
return (NULL);
}
