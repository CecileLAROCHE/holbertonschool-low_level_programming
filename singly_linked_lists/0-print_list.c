#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a singly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int str;
	int len;

	while (h != NULL)
		{
			str = h->str;
			len = h->len;

			if (*str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", len, str);

			h = h->next;
	}
	return (len);
}
