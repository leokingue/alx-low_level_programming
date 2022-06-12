#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: int argument
 * Return: 1 if success or 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
