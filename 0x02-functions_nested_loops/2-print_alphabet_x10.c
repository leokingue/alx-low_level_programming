#include "main.h"

/**
 * print_alphabet_x10 - print alphabet using your _putchar function
 *
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
