#include "lists.h"
#include <string.h>

/**
 * add_node - add node on the list
 * @head: head of list
 * @str: string value
 * Return: a list
 */
Bool is_empty_list(list_t **h);

list_t *add_node(list_t **head, const char *str)
{
	list_t *element = malloc(sizeof(*element));

	if (element == NULL)
	{
		return (NULL);
	}


	element->str = strdup(str);
	if (is_empty_list(head))
	{
		element->next = NULL;
	}

	element->next = *head;

	return (element);

}

/**
 * is_empty_list - check if the list is empty
 * @h: head of list
 * Return: bool value
 */

Bool is_empty_list(list_t **h)
{
	if (*h == NULL)
		return (true);
	return (false);
}
