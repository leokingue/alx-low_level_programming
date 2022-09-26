#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table.
 * @size: The  size of the new hash tables
 * Return: a pointer of the new hash tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_h_table;

	if (size == 0)
		return (NULL);
	n_h_table = malloc(sizeof(*n_h_table) * size);
	if (n_h_table == NULL)
	{
		return (NULL);
	}
	n_h_table->size = size;
	n_h_table->array = calloc((size_t)(n_h_table->size), sizeof(hash_table_t *));
	if (n_h_table->array == NULL)
	{
		return (NULL);
	}

	return (n_h_table);
}
