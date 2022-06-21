#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string argument
 * @c: character to find
 * Return: pt
 */
char *_strchr(char *s, char c)
{
	char *pt = NULL;
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			pt = &s[i];
			return (pt);
		}
		i++;
	}
}
