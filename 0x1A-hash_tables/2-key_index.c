#include "hash_tables.h"
/**
 * key_index - a hash function implementing the djb2 algorithm.
 * @key: represent a string
 * @size: the lenght of the string
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int nombreHachage, index;

	if (size == 0)
		exit(EXIT_FAILURE);
	nombreHachage = hash_djb2(key);
	index = nombreHachage % size;
	return (index);
}
