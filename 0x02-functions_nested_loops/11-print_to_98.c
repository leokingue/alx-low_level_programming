#include <stdio.h>
/**
 * print_to_98-print nutural number within given range
 *
 * @n:parameter for the function
 * Return:void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
