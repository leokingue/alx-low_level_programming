#include "main.h"
/**
 *_islower- checks if char us lower case
 *@c: integer c to check
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else if (c == 70 || c == 20 || c == 0 || c == 'I' || c == 'U' || c == 'H')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
