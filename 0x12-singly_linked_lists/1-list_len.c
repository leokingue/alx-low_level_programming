#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: List item
 * Return: Length of list item
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h->next;
	}
	return (len);
}
