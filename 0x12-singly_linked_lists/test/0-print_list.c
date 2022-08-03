#include <stdio.h>
#include "lists.h"

unsigned int myStrlen(char *str);
/**
 * print_list -  a function that prints all the elements
 * of a list_t list.
 * @h: List item
 * Return: value
 */
size_t print_list(const list_t *h)
{
	const list_t *L = h;
	size_t length = 0;

	while (L->next != NULL)
	{
		length++;
		if (L->str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%d] %s\n", myStrlen(L->str), L->str);
		}
		L = L->next;
	}
	return (length);
}

/**
 * myStrlen - a function that returns size of a string
 * @str: string argument
 * Return: number of character
 */
unsigned int myStrlen(char *str)
{
	unsigned int i, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
