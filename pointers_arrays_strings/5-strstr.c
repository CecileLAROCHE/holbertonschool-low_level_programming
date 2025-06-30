#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring.
* @haystack: The string to be searched.
* @needle: The substring to search for.
*
*Return: A pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == '\0')
	{
	return (haystack);
	}
while (*haystack != '\0')
	{
		index = 0;
		while (needle[index] != '\0' && haystack[index] == needle[index])
		{
			index++;
		}
		if (needle[index] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
