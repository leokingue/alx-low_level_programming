#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	if (dest == NULL)
		return (NULL);
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
