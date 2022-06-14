#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: char pointer argument
 * Return: void
 */
void print_rev(char *s)
{
	int i, pos, len = 0;
	char b = 0;

	for (i = 0; i >= 0; i++)
	{
		if (*(s + i) == '\0')
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
