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
	char *S[sizeof(char) * n] = &s;
	int i = 0;

	for (; i >= 0; i++)
	{
		if (*(S + i) == '\0')
		{
			break;
		}
		*(S + i) = b;
	}
	return (S);
}
