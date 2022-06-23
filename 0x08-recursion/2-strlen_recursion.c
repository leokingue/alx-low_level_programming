#include "main.h"
/**
 * _strlen_recursion - returning the length of a string
 * @s:string
 * Return:value
 */
int _strlen_recursion(char *s)
{
	int res, counter = 0;

	if (*s == '\0')
		return (counter);
	counter++;
	res = counter + _strlen_recursion(s + 1);
	return (res);
}
