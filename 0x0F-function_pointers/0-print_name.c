#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name to display
 * @f: the function pointer to choose the function to execute
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f(name))
	{
		f(name);
	}
}
