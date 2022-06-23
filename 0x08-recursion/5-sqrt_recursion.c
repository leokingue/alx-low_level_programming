#include "main.h"
int squareRoot(int num, int i);
/**
 * squareRoot - finding number that match criteria
 * @num:number as argument
 * @i:arg for incrimenting
 * Return:value
 */
int squareRoot(int num, int i)
{
	if (i * i == num)
		return (i);
	else if (i * i < num)
		return (squareRoot(num, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - finding square root of a given number
 * @n:number as argument
 * Return:square root of number 0r -1 as an error
 */
int _sqrt_recursion(int n)
{
	int val = 1;

	return (squareRoot(n, val));
}
