#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: The first string
*@s2: The second string
*Return: a pointer to the newly allocated space in memory
*        NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
char *concat = NULL;
int length1 = 0;
int length2 = 0;
int index1 = 0;
int index2 = 0;

if(s1 == NULL)
s1 = "";

if(s2 == NULL)
s2 = "";

while (*s1++)
	length1++;

while (*s2++)
	length2++;

/*Allocate memory for the concatenated string*/
concat = malloc(sizeof(char) * (length1 + length2 + 1));

/*Check if memory allocation was successful*/	
if (concat == NULL)
return (NULL);

for (index1 = 0; s1[index1] != '\0'; index1++)
{
	concat[index1] = s1[index1];
}	
for (index2 = 0; s2[index2] != '\0'; index2++)
{
	concat[index1 + index2] = s2[index2];
}


concat[index1 + index2] = '\0';

return (concat);
}
