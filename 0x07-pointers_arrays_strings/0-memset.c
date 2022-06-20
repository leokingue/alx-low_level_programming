#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: s pointer
 * @b: character to print on s
 * @n: bytes of memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
