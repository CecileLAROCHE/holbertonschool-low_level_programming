#include "main.h"
#include <stdlib.h>

/**
* c_strdup - return a pointer to a newly allocated space with
* a copy of the str given as parameter
* @str: The string to copy
* Return: a pointer to the allocated space
*/

char *_strdup(char *str)

{
char *dup;
int len;
int index;

if(str == NULL)
return(NULL);

for (len = 0; str[len] != '\0'; len++)
{
}

dup = (char *)malloc(sizeof(char) * (len + 1));
if (dup == NULL)
{
return (NULL);
}

for (index = 0; str[index] != '\0'; index++)
{
dup[index] = str[index];
}

dup[index] = '\0';

return (dup);

}
