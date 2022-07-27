#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list -  a function that prints all the elements
 * of a list_t list.
 * @h: List item
 * Return: value
 */
size_t print_list(const list_t *h)
{
	list_t *L = h;
	size_t length = 0;

	if (L->str == NULL)
	{
		printf("[0] nil\n");
		return (0);
	}
	else
	{
		while (L != NULL)
		{
			length++;
			L = L->next;
			printf("[%ld] %s \n", L->leng, L->str);
		}
	}
	return (length);
}
