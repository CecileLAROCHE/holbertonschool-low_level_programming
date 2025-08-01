#include "lists.h"

/**
 * print_list - prints all the elements of a singly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *str;
	unsigned int len;

	while (h != NULL)
	{
		str = h->str;
		len = h->len;

		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", len, str);

		h = h->next;
		count++;
	}
	return (count);
}

