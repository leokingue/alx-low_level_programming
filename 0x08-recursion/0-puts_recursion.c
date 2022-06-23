#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer argument
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int length = (sizeof(s) / sizeof(char));

	if (s[length - 1]  == '\0')
		_putchar('\n');
	_putchar(_puts_recursion(*(s + 1));
}
