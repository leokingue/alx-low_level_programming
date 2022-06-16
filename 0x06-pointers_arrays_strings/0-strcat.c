#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	return (dest);
}
