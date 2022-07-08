#include "function_pointers."
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: int array
 * @size: length of array
 * @cmp: function pointers
 * Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp != NULL || array != NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
