#include "lists.h"

/**
 * is_empty_list - check if the list is empty
 * @h: a head of list
 * Return: bool value
 */

Bool is_empty_list(const list_t *h)
{
	if (h == NULL)
		return (true);
	return (false);
}
