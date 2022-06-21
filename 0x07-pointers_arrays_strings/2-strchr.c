#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string argument
 * @c: character to find
 * Return: pt
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s[i]);
		}
	}
	if (c == s[i])
	{
		return (s[i]);
	}
	return (NULL);
}
