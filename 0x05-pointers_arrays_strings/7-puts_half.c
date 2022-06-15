#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * followed by a new line.
 * @str: char pointer argument
 * Return:void
 */
void puts_half(char *str)
{
	int i = 0;
	int len = _strlen(str) / 2;

	for (i = 0; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
