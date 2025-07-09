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
int len = 0;

while (s[len] && s[len] != ' ')
	len++;
return (len);
}

/**
*count_words - compte le nombre de mots dans une chaîne
*@str: la chaîne à analyser
*Return: le nombre de mots
*/

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
*strtow - splits a string into words
* @str: the string to split
*Return: a pointer to an array of strings (words), or NULL on failure
*/

char **strtow(char *str)
{
	int i = 0, k = 0, len, j, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] && k < word_count)
	{
		while (str[i] == ' ')
			i++;

		len = _strlen(&str[i]);
		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			while (k--)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';
		i += len;
		k++;
	}
	words[k] = NULL;

	return (words);
}
