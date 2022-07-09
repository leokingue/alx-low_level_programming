#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: const unsigned int argument
 *Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number_list;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(number_list, n);
	for (i = 0, i < n; i++)
	{
		sum += va_arg(number_list, int);
	}
	va_end(numbers);
	return (sum);
}

