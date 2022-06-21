#include "main.h"
/**
 * _strstr - checking substruing in the string
 * @haystack:arg1
 * @needle:arg2
 * Return: Value
 */
char *_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *word = needle;

	while (*str)
	{
		str = haystack;
		word = needle;

		while (*word)
		{
			if (*str == *word)
			{
				word++;
				str++;
			}
			else
				break;
			if (*word == '\0')
				return (haystack);
			haystack++;
		}
	}
	return (0);
}
