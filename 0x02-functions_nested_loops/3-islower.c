#include "main.h"
/**
 *_islower- checks if char us lower case
 *@c: integer c to check
 * Return: int
 *
 */
int _verifyOtherLetter(int c);
int _islower(int c)
{
	if ((c >= 97 || c <= 122) && (_verifyOtherLetter(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *_verifyOtherLetter- checks if other char us lower case
 *@c: in c to check
 *Return: int
 */
int _verifyOtherLetter(int c)
{
	if (c == 0 || c == 20 || c == 70 || c == 'U' || c == 'I' || c == 'H')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
