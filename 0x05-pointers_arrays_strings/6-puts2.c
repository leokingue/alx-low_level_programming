#include "main.h"
/**
 * puts2 - a function that prints every other
 * character of a string, starting with the first character
 * followed by a new line.
 * @str:array as parameter
 * Return:void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
