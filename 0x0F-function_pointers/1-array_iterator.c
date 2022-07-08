#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes
 * a function given as a parameter on each element of an array.
 * @array: int array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*pointer_to_action)(int) = action;
	unsigned long int i;

	if (array != NULL && size > 0 && pointer_to_action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			pointer_to_action(array[i]);
		}
	}
}
