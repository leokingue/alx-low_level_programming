#include "main.h"
/**
 * print_triangle-drawing triangle
 * @size:parameter
 * Return:value
 */
void print_triangle(int size)
{
	int i, j, n;

	n = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
}
