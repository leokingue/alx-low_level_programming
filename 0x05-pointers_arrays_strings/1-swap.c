#include "main.h"
/**
 * swap_int - a function that swaps the values
 * the values of two integers
 * @a: first int pointer argument
 * @b: second int pointer argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
