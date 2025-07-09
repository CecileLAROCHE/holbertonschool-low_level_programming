#include "main.h"
#include <stdlib.h>

/**
*_strlen - calcule la longueur d'une chaîne
*@s: chaîne de caractères
*Return: longueur de la chaîne
*/

unsigned int _strlen(char *s)
{
unsigned int len = 0;

while (s[len] != '\0')
	len++;
return (len);
}

/**
* argstostr - concatenates all the arguments of the program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to the concatenated string, or NULL on failure
*/

char *argstostr(int ac, char **av)
{
	char *new_str;
	int index1 = 0;
	int total_len = 0;
	int index2 = 0;
	int j;

	/*Validation des paramètres*/
if (ac == 0 || av == NULL)
{
return (NULL);
}
/*Calculer la taille totale nécessaire*/
for (index1 = 0; index1 < ac; index1++)
	total_len += _strlen(av[index1]) + 1;

/*Allocation de mémoire*/
new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}


/*Copier les arguments dans la nouvelle chaîne*/

for (index1 = 0; index1 < ac; index1++)
{
	

	for (j = 0; av[index1][j] != '\0'; j++)
	{
		new_str[index2++] = av[index1][j];
	}
	new_str[index2++] = '\n';
}

new_str[index2] = '\0';
return (new_str);
}
