#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer argument
 * Return: void
 */
unsigned int my_strlen(char *s);
void _puts_recursion(char *s)
{
	unsigned int length = my_strlen(s);

	if (s[length]  == '\0')
		_putchar('\n');
	_putchar(*s + 1);
}
/**
 * my_strlen - calculate the length of string
 * @s: string
 * Return: value
 */
unsigned int my_strlen(char *s)
{
	int i, count = 0;

	while (s[i])
	{
		count++;
		i++;
	}
}
