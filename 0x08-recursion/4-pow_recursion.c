#include "main.h"
/**
 * _pow_recursion - displaying power of a number
 * @x:number as arg1
 * @y:power as arg2
 * Return:value
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
