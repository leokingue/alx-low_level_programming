#include "main.h"
/**
 * _strlen - a function that returns
 * the length of a string.
 * @s: char pointer argument
 * Return: a number
 */
int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		counter++;
	}

	return (counter);
}
