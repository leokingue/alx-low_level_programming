#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create -  function that creates a hash table.
 * @size: The  size of the new hash tables
 * Return: a pointer of the new hash tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(*new_hash_table) * size);
	if (new_hash_table == NULL)
	{
		return (NULL);
	}
	new_hash_table->size = size;
	new_hash_table->array = calloc((size_t)(new_hash_table->size), sizeof(hash_table_t *));
	if (new_has_table->array == NULL)
	{
		return (NULL);
	}
	return (new_hash_table);
}
