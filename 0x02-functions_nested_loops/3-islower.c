#include "main.h"
/**
 *_islower- checks if char us lower case
 *@c: integer c to check
 * Return: int
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
