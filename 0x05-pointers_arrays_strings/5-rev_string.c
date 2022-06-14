#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: char pointer argument
 * Return: void
 */
void rev_string(char *s)
{
	int i, pos, len = 0;
	char b;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		len++;
	}
	len--;
	for (pos = 0; pos < len - pos ; pos++)
	{
		b = s[pos];
		s[pos] = s[len - pos];
		s[len - pos] = b;
	}

}
