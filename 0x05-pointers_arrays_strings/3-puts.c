#include "main.h"
/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout.
 * @str: string pointer argument
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		_putchar(*(str + i));
	}
	_putchar('\n');
}
