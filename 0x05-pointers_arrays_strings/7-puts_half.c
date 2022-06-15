#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * followed by a new line.
 * @str: char pointer argument
 * Return:void
 */
void puts_half(char *str)
{
	int i, n, counter = 0;

	for (i = 0; i >= 0; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		counter++;
	}
	if (counter % 2 != 0)
	{
		n = (counter - 1) / 2;
	}
	else
	{
		n = counter / 2;
	}
	for (i = n; i <= counter; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
