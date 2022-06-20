#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: s pointer
 * @b: constant octal b
 * @n: bytes of memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i <= sizeof(char) * n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
