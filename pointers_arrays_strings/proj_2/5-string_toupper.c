#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@string: chaine de caracère
*
*code ASCII minuscule : 97 -> 122
*code ASCI majuscule : 65 -> 90
*différence est de 32
*
*Return: string
*/

char *string_toupper(char *string)

{
int index = 0;/*position sur la chaine de caractère*/



while (string[index] != '\0')
{
if (string[index] >= 'a' &&  string[index] <= 'z')
	{
	string[index] -= 32;
	}
	index++;
}
return (string);
}
