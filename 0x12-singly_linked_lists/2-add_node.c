#include "lists.h"

/**
 * add_node - add node on the list
 * @head: head of list
 * @str: string value
 * Return: a list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *element = malloc(sizeof(*element));

	if (element == NULL)
	{
		return (NULL);
	}

	element->str = str;
	if (is_empty_list(*head))
	{
		element->next = NULL;
	}

	element->next = *head;

	return (element);

}
