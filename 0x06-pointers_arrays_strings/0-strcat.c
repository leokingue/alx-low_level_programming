#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, a = 0;
	static char *DESTINATION;

	for (i = 0; dest[i] != '\0'; i++)
	{
		DESTINATION[i] = dest[i];
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		DESTINATION[i] = src[a];
		i++;
	}
	return (DESTINATION);
}
