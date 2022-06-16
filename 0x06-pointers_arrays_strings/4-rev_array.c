#include "main.h"
/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 * @a: array int
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		count++;
	}
	for (count = n - 1; count >= 0; count--)
	{
		if (count != 0)
		{
			_putchar(a[count] + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[count] + '0');
		}
	}
}
