#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list -  a function that prints all the elements
 * of a list_t list.
 * @h: List item
 * Return: value
 */
size_t print_list(const list_t *h)
{
	size_t len;

	while (h != NULL)
	{
		len++;
		h = h->next;
		if (h->str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}
	return (len);
}
