#include "search_algos.h"
/*
 * linear_search - implementation in C of linear_search
 * Description: 'the program's description'
 * @array: int array
 * @size: length of array
 * @value: search value
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			printf("Found %ld at index: %ld\n", i, i);
			return (i);
		}
	}
	return (-1);
}
