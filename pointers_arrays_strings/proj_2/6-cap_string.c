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

/*condition d'arret de la boucle*/
while (string[index] != '\0')
{
if (string[0] >= 'a' &&  string[0] <= 'z')/*cas du premier mot*/
	{
	string[index] -= 32;/*mettre en majuscule*/
	}


	if (string[index] == ' ' || string[index] == '\t' || string[index] == '\n' ||
	string[index] == ',' || string[index] == ';' || string[index] == '.' ||
	string[index] == '!' || string[index] == '?' || string[index] == '"' ||
	string[index] == '(' || string[index] == ')' || string[index] == '{' ||
	string[index] == '}') /*cas du premier caractère*/
	{
		if (string[index + 1] >= 'a' &&  string[index + 1] <= 'z')
			{
			string[index + 1] -= 32; /*mettre en majuscule*/
			}
	}
	index++;

}
return (string);
}
