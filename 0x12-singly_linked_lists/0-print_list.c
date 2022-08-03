#include <stdio.h>
#include "lists.h"
/**
 * print_list -  a function that prints all the elements
 * of a list_t list.
 * @h: List item
 * Return: number Nodes
 */
size_t print_list(const list_t *h)
{
	size_t numberNodes = 0;
	const list_t *tempo = h;

	while (tempo->next != NULL)
	{
		if (tempo->str != NULL)
		{
			printf("[%d] %s\n", tempo->len, tempo->str);
			numberNodes++;
		}
		else
		{
			printf("[0] (nil)\n");
			numberNodes++;
		}
		tempo = tempo->next;
		printf("[%d] %s\n", tempo->len, tempo->str);
		numberNodes++;
	}
	return (numberNodes);
}
