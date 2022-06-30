#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating array of a string and initialize it
 * @size:size of array
 * @c:single chairacter to the areray
 * Return:value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(c));

	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
