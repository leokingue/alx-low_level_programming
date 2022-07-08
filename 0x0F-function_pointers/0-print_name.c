#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name to display
 * @f: the function pointer to choose the function to execute
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == &print_name_as_is) /*if f = print_name_as_is*/
	{
		f(name);
	}
	else if ((*f) == &print_name_uppercase)
	{
		f(name);
	}
}
