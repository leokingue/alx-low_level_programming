#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: length value
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(3);
	}
	return (p);
}
