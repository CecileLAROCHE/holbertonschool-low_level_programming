#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
*strtow - splits a string into words
* @str: the string to split
*
*Return: a pointer to an array of strings (words), or NULL on failure
*/

char **strtow(char *str)
{
int index;
int word_count = 0;
int in_word = 0;
int total_len = 0;

/*Validation des paramètres*/
if (str == NULL || *str == '\0')
{
return (NULL);
}

/*Compter le nombre de mots*/
for (index = 0; str[index] != '\0'; index++)
{
	if (str[index] == ' ' && in_word == 0)
	{
		in_word = 1;
		word_count++;
	}
	else if (str[index] == ' ')
	{
		in_word = 0;
	}
}

/*Calculer la taille totale nécessaire*/
for (index = 0; index < str; index++)
	total_len += _strlen(av[index]) + 1;

/*Allocation de mémoire*/
new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}


printf("Number of words: %d\n", word_count); /*à supprimer*/
return (NULL);  /* temporaire */
}
