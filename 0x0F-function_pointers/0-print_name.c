#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: the name to display
 * @f: the function pointer to choose the function to execute
 * Return: void
 */
void print_name(char __attribute__ ((unused)) *name, void (*f)(char *))
{
	void (*pointer_to_function)(char *) = f;

	if (pointer_to_function != NULL)
	{
		pointer_to_function(name);
	}
}
