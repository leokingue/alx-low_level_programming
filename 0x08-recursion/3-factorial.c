#include "main.h"
/**
 * factorial - facrorial of a given number
 * @n:arg1
 * Return:value
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact)
}
