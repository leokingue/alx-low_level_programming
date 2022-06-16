#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int i = 0, j;
	char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char string[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == string[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}
