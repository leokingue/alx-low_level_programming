#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: char pointer argument
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int counter;

	counter = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
