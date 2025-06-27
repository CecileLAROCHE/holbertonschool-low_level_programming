#include "main.h"

/**
*cap_string - entry
*@string: chaine de caracère
*
*code ASCII minuscule : 97 -> 122
*code ASCI majuscule : 65 -> 90
*différence est de 32
*
*Return: string
*/

char *cap_string(char *string)

{
int index = 0; /*position sur la chaine de caractère*/

while (string[index] != '\0')
{
if (string[index] == '1')
	{
	if (string[index] >= 'a' &&  string[index] <= 'z')
			{
			string[index] -= 32;
			}
		}
else
{
	if (string[index] == '0')
	{
		if (string[index + 1] >= 'a' &&  string[index + 1] <= 'z')
			{
			string[index + 1] -= 32;
			}
	}
	index++;
}
}
return (string);
}
