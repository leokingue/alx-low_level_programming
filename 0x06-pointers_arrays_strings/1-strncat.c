#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: int argument
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}
	dest[i + a] = '\0';
	return (dest);
}
